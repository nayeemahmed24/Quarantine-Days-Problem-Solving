#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int m,n;
        cin>>m>>n;
        if(m == 1 || n == 1 || (m == 2 && n==2)){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
