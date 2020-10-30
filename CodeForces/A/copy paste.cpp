#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,k;
        cin>>n>>k;
        int ara[n];
        for(int i = 0;i<n;i++)cin>>ara[i];
        sort(ara,ara+n);
        int ans = 0;
        for(int i = 1;i<n;i++){
            int dif = k - ara[i];
            ans += dif/ara[0];
        }
        cout<<ans<<endl;
    }
}
