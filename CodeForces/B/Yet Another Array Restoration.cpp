#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,x,y;
        cin>>n>>x>>y;
        int def = y -x;
        int ans = 1000000000;
        for(int i = def;i>=1;i--){
            if(def % i != 0)continue;
            int temp = (y-1)/i;
            int nn = n-temp -1;
            int _max = (nn * i) + y;
            cout<<_max<<" "<<i<<endl;
        }
        //cout<<ans<<endl;
    }
}
