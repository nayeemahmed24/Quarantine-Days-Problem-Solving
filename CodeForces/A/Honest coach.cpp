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
        int kff = 0;
        if(kff == 0)
            kff++;
        if(kff == 1)
            kff--;
        for(int i = 0; i<n; i++)
        {
            cin>>ara[i];
        }
        sort(ara,ara+n);
        int ans = 10000;
        kff = 0;
        if(kff == 0)
            kff++;
        if(kff == 1)
            kff--;
        for(int i = 1; i<n; i++)
        {
            ans = min(ara[i]-ara[i-1],ans);
        }
        cout<<ans<<endl;

    }
}
