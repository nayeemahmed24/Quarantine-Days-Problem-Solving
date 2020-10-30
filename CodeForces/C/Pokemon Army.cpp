#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,z;
        cin>>n>>z;
        int ara[n];
        for(int i = 0;i<n;i++)cin>>ara[i];
        bool increasing = true;
        int cur;
        long long int ans = 0;
        for(int i = 0;i<n-1;i++){
            cur = ara[i];
            if(increasing){
                if(ara[i+1] < cur){
                    ans += cur;
                    increasing = !increasing;
                }
            }
            else{
                if(ara[i+1] > cur){
                    ans -= cur;
                    increasing = !increasing;
                }
            }
        }
        if(increasing){
            ans += ara[n-1];
        }
        cout<<ans<<endl;
    }
}
