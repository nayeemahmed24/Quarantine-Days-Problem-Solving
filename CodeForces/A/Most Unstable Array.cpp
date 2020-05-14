#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        long long n,m;
        cin>>n>>m;
        if(n == -1){
            cout<< " "<<endl;
        }
        else if(n == 2)cout<<m<<endl;
        else if(n == 1) cout<<0<<endl;
        else if(n == -1){
            cout<< " "<<endl;
        }
        else{
            cout<<m*2<<endl;
        }
    }
}
