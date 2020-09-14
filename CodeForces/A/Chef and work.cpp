#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,k;
        cin>>n>>k;
        int ara[n];
        for(int i = 0;i<n;i++){
            cin>>ara[i];
        }

        int ans = 0;
        int sum = 0;
        bool falg = true;
        for(int i = 0;i<n;i++){
            if(ara[i]>k){cout<<-1<<endl;falg = !falg;break;}
            sum += ara[i];
            if(sum <= k){
                continue;
            }
            else{
                sum = 0;
                ans++;
                i--;
            }
        }
        if(!falg)continue;
        if(sum != 0 )ans++;
        cout<<ans<<endl;
    }
}
