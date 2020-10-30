#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        long long int n,m,k;
        cin>>n>>m>>k;
        long long totalStick = k + m*k;
        if(totalStick <= n){
            long long  ans = 1 + k;
            cout<<ans<<endl;
        }
        else{
            long long ans =  ceil((double)((double)(totalStick - n)/(double)(n-1))) + k + 1;
            cout<<ans <<endl;
        }
    }
}
