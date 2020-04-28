#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int ara[n];
    for(int i = 0;i<n;i++)cin>>ara[i];
    long long total = 1;

    if(n<=m){
        for(int i = 0;i<n-1;i++){
            for(int j = i+1;j<n;j++){
                total *= abs(ara[i] - ara[j]);
                total = total%m;
            }
        }
        cout<<total<<endl;
    }
    else{
        cout<<0<<endl;
    }
}
