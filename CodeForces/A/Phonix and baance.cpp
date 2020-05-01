#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        long long int total = 0;
        long long val = 1;
        long long ans = 0;
        for(int i = 1;i<=n;i++){
            total += val * 2;
            val *= 2;
            if(i <= (n/2)-1){
                ans += val;
            }
        }
        //cout<<total<< " " <<ans<<endl;
        cout<<abs((total - ans - val)-(ans+val) )<<endl;


    }
}
