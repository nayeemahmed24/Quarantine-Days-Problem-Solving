#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        string ans;
        for(int i = 0;i<200;i++)ans += "a";
        int n;
        cin>>n;
        int ara[n];
        cout<<ans<<endl;
        for(int i = 0;i<n;i++){
            cin>>ara[i];
            if(ans[ara[i]] == 'a'){
                ans[ara[i]] = 'b';
            }
            else{
                ans[ara[i]] = 'a';
            }
            cout<<ans<<endl;
        }

    }
}
