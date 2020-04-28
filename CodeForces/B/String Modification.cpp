#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string best = s;
        vector< pair<string,int> > ve;
        string temp;
        int ans = 1;
        for(int i = 2;i<=n;i++){
            temp = s.substr(i-1,n-i+1);
            string r = s.substr(0,i-1);

            if(n%2 == i%2){
                reverse(r.begin(),r.end());
            }
            temp += r;
            if(best>temp){
                best = temp;
                ans = i;
            }
        }
        cout<<best<<endl<<ans<<endl;
    }
}
