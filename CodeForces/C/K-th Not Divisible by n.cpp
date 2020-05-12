#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        long long  n,k;
        cin>>n>>k;
        long long mod = k % (n-1);
        long long divResult = k/(n-1);
        long long ans = divResult * n;
        if(mod == 0)mod = -1;
        ans += mod;
        cout<<ans<<endl;


    }
}
