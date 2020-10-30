#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> ve;
        int cnt = 1;
        for(int i = 0; i<n; i++)
        {
            if(i == 0)
            {
                continue;
            }
            if(s[i] == s[i-1])
            {
                cnt++;
            }
            else
            {
                ve.push_back(cnt);
                cnt = 1;
            }
        }
        ve.push_back(cnt);
        int j = 0;
        int ans = 0;
        for(int i = 0;i<ve.size(); i++)
        {
            while(1)
            {
                if(ve[j] <= 1 && j < ve.size())
                    j++;
                else{
                    break;
                }
            }
            if(j == ve.size()){
                i++;
            }
            else{
                ve[j]--;

            }

            if(i == j)j++;
            ans++;

        }
        cout<<ans<<endl;
    }
}
