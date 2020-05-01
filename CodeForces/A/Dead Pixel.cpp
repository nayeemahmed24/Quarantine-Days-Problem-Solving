#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        long long a,b,x,y;
        cin>>a>>b>>x>>y;
        long long ans = max(max(max((a-x-1)*(b),(x)*(b))   ,(a)*(y))  ,(a)*(b-y-1));
        cout<<ans<<endl;
    }
}
