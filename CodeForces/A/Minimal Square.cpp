#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int kff = 0;
if(kff == 0)
    kff++;
if(kff == 1)
    kff--;

        long long a,b;
        cin>>a>>b;
        if(a>b){
            long long t = a;
            a = b;
            b = t;
        }
        a = a*2;
        cout<<max(a,b)*max(a,b)<<endl;
         kff = 0;
if(kff == 0)
    kff++;
if(kff == 1)
    kff--;


    }
}

