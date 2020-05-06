#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    string news = "";
    set<char>se;
    int distinct;
    se.insert(s[0]);
    for(int i = 1; i<n; i++)
    {
        se.insert(s[i]);
    }
    distinct = se.size();
    map<char,int>track;
    int j = 0,i = 0;
    int ans = n+5;

    while(1)
    {
        if(distinct>0 && i<n)
        {
            track[s[i]]++;
            if(track[s[i]] == 1)
            {
                distinct--;
            }
            if(distinct == 0)
            {
                ans = min(ans,i-j+1);
            }
            i++;
        }
        else
        {
            track[s[j]]--;
            if(track[s[j]] == 0)
            {
                distinct++;
            }
            j++;
            if(distinct == 0)
            {
                ans = min(ans,i-j);
            }

        }
        if(i == n &&  distinct >0)break;
    }


    cout<<ans<<endl;


}
