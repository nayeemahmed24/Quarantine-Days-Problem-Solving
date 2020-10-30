#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,k;
        cin>>n>>k;
        long long int ara[n];
        for(int i = 0 ;i<n;i++)cin>>ara[i];
        sort(ara,ara+n);
        for(int i = n-2,j = 0;j<k;i--,j++){
            ara[n-1] += ara[i];
        }
        cout<<ara[n-1]<<endl;
    }
}
