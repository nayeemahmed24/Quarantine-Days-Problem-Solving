#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){

        int a,b;
        cin>>a>>b;
        if(a>b)swap(a,b);
        int dif = b - a;
        cout<<(int)ceil((double)dif/10.0);
        cout<<endl;
    }
}
