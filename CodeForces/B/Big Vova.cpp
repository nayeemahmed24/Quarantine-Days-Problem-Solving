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
        int ara[n];
        for(int i = 0;i<n;i++)cin>>ara[i];
        vector<int>ans;
        map<int,int> aa;
        sort(ara,ara+n);
        int maxgcd = -1;
        int curgcd = ara[n-1];

        ans.push_back(ara[n-1]);
        aa[n-1] = 1;
        int a;
        for(int j = 0; j<n; j++)
        {
            a = -1;
            maxgcd = -1;
            int ind = -1;
            for(int i = 0; i<n; i++)
            {
                if(aa[i] == 1 )continue;
                int gcd = __gcd(curgcd,ara[i]);
                if(gcd >= maxgcd)
                {
                    maxgcd = gcd;
                    a = ara[i];
                    ind = i;
                }
            }
            if(a == -1)break;
            ans.push_back(a);
            curgcd = maxgcd;
            aa[ind] = 1;
        }
        for(int i = 0 ;i<ans.size();i++){
            cout<<ans[i] << " ";
        }
        cout<<endl;


    }
}
