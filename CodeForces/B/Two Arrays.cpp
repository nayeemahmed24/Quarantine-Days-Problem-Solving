#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        long long int n,k;
        cin>>n>>k;
        long long  ara[n];
        bool black = true;
        for(int i = 0; i<n; i++)
        {
            cin>>ara[i];
            if(k%2 == 0)
            {
                if(ara[i]  == k/2 )
                {
                    if(black)
                        cout<< 0 << " ";
                    else
                        cout<< 1 <<" ";
                    black = !black;
                }
                else if(ara[i]<k/2)
                {
                    cout<<0<<" ";
                }
                else
                {
                    cout<<1<<" ";
                }
            }
            else{
                if(ara[i]<=k/2)
                {
                    cout<<0<<" ";
                }
                else
                {
                    cout<<1<<" ";
                }
            }

        }
        cout<<endl;

    }
}
