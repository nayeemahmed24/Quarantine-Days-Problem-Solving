#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        long long ans = 0;
        int x1,y1,z1,x2,y2,z2;
        cin>>x1>>y1>>z1>>x2>>y2>>z2;
        int d = min(z1,y2);
        ans += d * 2;
        z1 -= d;
        y2 -= d;
        int rem = z1 + x1;
        d = min(rem,z2);
        if(z2>d){
            ans -= 2 *(z2 - d);
        }
        cout<<ans<<endl;

    }
}
