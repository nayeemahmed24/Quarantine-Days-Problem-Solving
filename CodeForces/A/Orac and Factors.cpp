#include<bits/stdc++.h>
using namespace std;
int main(){

    int test;
    cin>>test;
    while(test--){
        long long int n,k;
        cin>>n>>k;
        if(n % 2 == 0){
            cout<<n+2*k<<endl;
        }
        else{
            long long int temp ;
            for(long long int i = 2;i<=n;i++){
                if(n%i == 0){
                    temp = i;
                    break;
                }
            }
            cout<<n + temp + 2*(k-1)<<endl;
        }
    }
}
