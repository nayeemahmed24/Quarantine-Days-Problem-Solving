#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int ara[n];
        long long int cur = 0;
        long long int ans = 0;
        long long int sum = 0;
        for(int i = 0;i<n;i++){
            cin>>ara[i];
            if(ara[i]>0)sum += ara[i];
            if(cur<0)cur = 0;
            if(cur>0){
               if(ara[i] < 0){
                    ans += min(cur,(long long)abs(ara[i]));
                    cur += ara[i];

               }else
                    cur += ara[i];
            }
            else{
                if(ara[i]>0)cur += ara[i];
            }
        }
        cout<<sum - ans<<endl;
    }
}
