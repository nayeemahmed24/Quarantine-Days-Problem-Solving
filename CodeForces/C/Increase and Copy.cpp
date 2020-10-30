#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        double n;
        cin>>n;
        double sq = ceil(sqrt(n));
        int ans = sq - 1;
        ans += ceil(n/sq);
        cout<<ans-1<<endl;
    }
}
