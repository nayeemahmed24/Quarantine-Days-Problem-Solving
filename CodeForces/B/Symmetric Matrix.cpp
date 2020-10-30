#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,m;
        cin>>n>>m;
        int ara[n][4];
        bool flag1 = false,flag2 = false;
        for(int i = 0;i<n;i++){
            cin>>ara[i][0]>>ara[i][1]>>ara[i][2]>>ara[i][3];
            if(ara[i][1] == ara[i][2]){
                flag2 = true;
            }
        }
        if(m % 2 == 1){
            flag2 = false;
        }
        if( flag2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
