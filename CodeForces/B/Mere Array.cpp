#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
       int n;
       cin>>n;
       int ara[n];
       int ans[n];
       for(int i = 0;i<n;i++){
        cin>>ara[i];
        ans[i] = ara[i];
       }
       sort(ans,ans+n);
       int _min = ans[0];
       bool flag = true;
       for(int i = 0;i<n;i++){
            int gcd = __gcd(_min,ara[i]);
            if(gcd != _min){
                if(ara[i] != ans[i]){
                    flag = false;
                    break;
                }
            }

       }
       if(flag)cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;


    }
}
