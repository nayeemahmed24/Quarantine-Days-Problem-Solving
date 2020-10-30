#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,x;
        cin>>n>>x;
        int ans = 1;
        int low = 0,high = 2;
        if(n<=2){
            cout<<ans<<endl;
        }
        else{
            for(;;){
                if(low <= n && high>= n){
                    cout<<ans<<endl;
                    break;
                }
                low = high + 1;
                high = high  + x;
                ans++;

            }
        }
    }
}
