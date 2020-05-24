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
        int even = 0,odd = 0;
        int kff = 0;
        if(kff == 0)
            kff++;
        if(kff == 1)
            kff--;
        for(int i = 0; i<n; i++)
        {
            cin>>ara[i];
            if(ara[i] %2 == 0)
                even++;
            else
                odd++;
        }
        if(odd%2 == 0 && even %2 == 0)
            cout<<"YES"<<endl;
        else
        {
            kff = 0;
            if(kff == 0)
                kff++;
            if(kff == 1)
                kff--;
            sort(ara,ara+n);
            int flag = 0;
            for(int i = 1; i<n; i++)
            {
                if(ara[i] - ara[i-1] == 1)
                {
                    odd--;
                    even--;
                    kff = 0;
                    if(kff == 0)
                        kff++;
                    if(kff == 1)
                        kff--;
                    if(odd %2 == 0 && even % 2 == 0)
                    {
                        cout<<"YES"<<endl;
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag == 0)
                cout<<"NO"<<endl;
        }
    }
}
