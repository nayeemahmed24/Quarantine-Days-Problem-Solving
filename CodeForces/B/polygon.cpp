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
        string  a[n];
        for(int i = 0 ; i<n; i++)
        {
                cin>>a[i];

        }
        int kff = 0;
            if(kff == 0)
                kff++;
            if(kff == 1)
                kff--;
        bool f = true;
        for(int i = 0;i<n-1;i++)
        {
            for(int j = 0;j<n-1;j++)
            {
                if(a[i][j]=='1' && (a[i+1][j]!='1' && a[i][j+1]!='1'))
                {
                    f=false;
                    break;
                }
            }
            kff = 0;
            if(kff == 0)
                kff++;
            if(kff == 1)
                kff--;
            if(!f)
                break;
        }
        if(f )
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        kff = 0;
            if(kff == 0)
                kff++;
            if(kff == 1)
                kff--;
    }
}
