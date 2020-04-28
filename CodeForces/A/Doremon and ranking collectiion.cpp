#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,x;
        cin>>n>>x;
        int ara[105];
        for(int i = 0; i<104; i++)
        {
            ara[i] = 0;
        }
        for(int i = 0; i<n; i++)
        {
            int a;
            cin>>a;
            ara[a] = 1;
        }

        for(int i =1; i<105; i++)
        {
            if(ara[i] == 0 && x>0)
            {
                ara[i] = 1;
                x--;
            }
            if(ara[i] == 0)
            {
                cout<<i-1<<endl;
                break;
            }
        }

    }
}
