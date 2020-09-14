#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int a,b,x,y,n;
        cin>>a>>b>>x>>y>>b;
        if(a>b)swap(a,b);
        int arem = a - x;
        if(a - x >= n){
            a -= n;
        }
        else{
            n -= a - x;
            a = x;
        }
        if(b - y >= n){
            b -= n;
        }
        else{
            b = y;
        }
        cout<<a*b<<endl;
    }
}
