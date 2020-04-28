#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int cnt = 0;
    vector<int>ve;
    int i = 0,j = s.length()-1;
    int flag = 0;
    int left,right;
    while(1)
    {
        if(i>=j)
            break;
        if(flag ==0)
        {
            if(s[i] == '(')
            {
                left = i+1;
                flag = 1;
            }
            i++;
        }
        else
        {
            if(s[j] == ')')
            {
                right = j+1;
                flag = 0;
                cnt+=2;
                ve.push_back(left);
                ve.push_back(right);
            }
            j--;

        }
    }

    sort(ve.begin(),ve.end());
    if(cnt == 0){
        cout<<0<<endl;
        return 0;
    }
    cout<<1<<endl;
    cout<<cnt<<endl;

    for(int i = 0;i<ve.size();i++)
        cout<<ve[i]<< " ";
    cout<<endl;
}
