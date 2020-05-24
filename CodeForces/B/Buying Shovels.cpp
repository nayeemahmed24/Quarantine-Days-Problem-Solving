#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        long long n,k;
        cin>>n>>k;
        if(n<=k)
        {
            cout<<1<<endl;
        }
        else
        {

            int range = k;
            long long ans = n;

            for(long long int i = 1;i*i<=n; i++)
            {
                if(i>k)break;
                if(n%i == 0)
                {
                    if(n/i>i && n/i<=k)ans = min(i,ans);
                    else
                        ans = min(ans,n/i);
                }
            }
            cout<<ans<<endl;

        }
    }
}
