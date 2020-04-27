#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        long long int n,k;
        cin>>n>>k;
        long long int ara[n];
        vector<long long int> extra,shortage;
        long long int extras = 0;
        for(int i = 0;i<n;i++){
            cin>>ara[i];
            if(k - ara[i] >0 ){
                shortage.push_back(abs(k-ara[i]));
            }
            else{
                extra.push_back(abs(k-ara[i]));
                extras += abs(k-ara[i]);
            }
        }
        sort(shortage.begin(),shortage.end());
        long long int ans = extra.size();
        for(int i = 0;i<shortage.size();i++){
            if(shortage[i] <= extras){
                extras -= shortage[i];
                ans++;
            }
        }
        cout<<ans<<endl;


    }
}
