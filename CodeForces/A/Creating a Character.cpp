#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int a,b,c;
        cin>>a>>b>>c;
        int ans = 0;
        if(c == 0 && a>b){
            cout<<ans+1<<endl;
            continue;
        }
        if(a<=b){
            int d = (b+1) - a;
            if(d>c){
                cout<<0<<endl;
                continue;
            }
            c -= d;
            a = b+1;
        }
        int d = a -b;
        ans += min(c,d+1);
        cout<<ans<<endl;
    }
}
