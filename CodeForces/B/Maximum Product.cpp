#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int ara[n];
        for(int i = 0;i<n;i++)cin>>ara[i];
        sort(ara,ara+n);
        long long ans = 1;
        if(ara[n-1] <= 0){
            for(int i = n-1;i>=n-5;i--)ans *= ara[i];
        }
        else{
            long long fullPos = 1;
            for(int i = n-1;i>=n-5;i--)fullPos *= ara[i];
            ans = max(fullPos,(long long int)ara[n-1]*ara[n-3]*ara[n-2]*ara[0]*ara[1]);
            ans = max(ans,(long long int)ara[n-1]*ara[0]*ara[1]*ara[2]*ara[3]);

        }
        cout<<ans<<endl;
    }
}
