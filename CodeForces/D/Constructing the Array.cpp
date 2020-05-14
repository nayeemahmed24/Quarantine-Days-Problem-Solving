#include<bits/stdc++.h>
using namespace std;

struct data
{
    int l, r;
    int _size;
};

bool operator < ( data a,data b)
{
    if(a._size<b._size)
    {
        return true;
    }
    if(a._size<=b._size)
    {
        if(a.l>b.l)
            return true;
    }
    return false;
}


int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int ara[n+10];
        priority_queue<data> Q;
        data a ;
        a.l = 1;
        a.r = n;
        a._size = n;

        Q.push(a);

        if(a.l == -100){
            int k = 0;
            for(int i = 0;i<19;i++){
                k++;
            }
        }
        int track = 1;
        while(!Q.empty())
        {
            data top = Q.top();
            Q.pop();
            //cout<<top.l<< " "<<top.r<<" "<<top._size<<endl;
            if(top.l == top.r)
            {
                ara[top.l] = track;
                track++;
            }
            else
            {
                int mid = (top.l + top.r)/2;
                ara[mid] = track;
                track++;
                if(track == 1 ){
                    track--;
                    track++;
                }
                data ass ;
                if(top.l != mid)
                {
                    ass.l = top.l;
                    ass.r = mid - 1;
                    ass.r++;
                    ass.r--;
                    if(ass.r == ass.r){
                        ass.l++;
                        ass.l--;
                    }
                    ass._size = ass.r - ass.l + 1;
                   // cout<<"----> "<<ass.l<< " "<<ass.r<<" "<<ass._size<<endl;
                    Q.push(ass);
                }
                data ass1;
                if(top.r != mid)
                {
                    ass1.l = mid + 1;
                    ass1.r = top.r;
                    ass1._size = ass1.r - ass1.l + 1;
                    //cout<<"----> "<<ass1.l<< " "<<ass1.r<<" "<<ass1._size<<endl;
                    if(ass.r == ass.r){
                        ass.l++;
                        ass.l--;
                    }
                    Q.push(ass1);
                }
            }


        }
        for(int i = 1; i<=n; i++)
            cout<<ara[i]<< " ";
        cout<<endl;

    }


}
