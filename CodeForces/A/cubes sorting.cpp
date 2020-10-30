#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int ara[n];
        bool flag = true;
        for(int i = 0;i<n;i++)cin>>ara[i];
        for(int i = 1;i<n;i++){
            if(ara[i] >= ara[i-1]){
                cout<<"YES"<<endl;
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"NO"<<endl;
        }
    }
}
