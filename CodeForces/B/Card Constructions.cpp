#include<bits/stdc++.h>
using namespace std;
long long int ara[100009];

long long int bs(long long int n,int size_)
{

    int first = 0;
    int last = size_-1;
    int middle = (first+last)/2;
    while (first <= last)
    {
        if(ara[middle] < n)
        {
            first = middle + 1;

        }
        else if(ara[middle] == n)
        {
            //cout<<num<<" found in the array at the location "<<middle+1<<"\n";
            break;
        }
        else
        {
            last = middle - 1;
        }
        middle = (first + last)/2;
    }
    return ara[middle];
}



int main()
{
    int test;
    cin>>test;
    ara[0] = 0;
    int size_;
    for(int i = 1;; i++)
    {
        ara[i] = (i*(i+1))/2;
        ara[i] *= 3;
        ara[i] -= i;
        size_ = i+1;
        if(ara[i] > 1000000009)
            break;
    }

    while(test--)
    {
        long long int n;
        cin>>n;
        int ans = 0;
        while(n>=2){
            int temp = bs(n,size_);
            n -= temp;
            if(temp != 0)ans++;
        }
        cout<<ans<<endl;
    }
}
