#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,k;
        cin>>n>>k;
        int ara[n];
        bool one = false;
        for(int i = 0;i<n;i++){
            cin>>ara[i];
            if(ara[i] == k){
                one = true;
            }
        }
        long long dif = 0;
        bool flag = false;
        for(int i = 0;i<n;i++){
            if(k != ara[i])flag = true;
            dif += k - ara[i];
        }
        if(!flag)cout<<0<<endl;
        else if(dif == 0)cout<<1<<endl;
        else if(one)
            cout<<1<<endl;
        else
            cout<<2<<endl;

    }
}
