#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int ans = 1;
        string s;
        cin>>s;
        if(n % 2 == 1){
            ans = 2;
            for(int i = 0;i<n;i++){
                if(i % 2 == 0){
                    if((s[i]-'0') % 2 == 1)ans = 1;
                }
            }
        }
        else{
            ans = 1;
            for(int i = 0;i<n;i++){

                if(i % 2 == 1){
                    if((s[i]-'0') % 2 == 0)ans = 2;
                }
            }
        }
        cout<<ans<<endl;

    }
}
