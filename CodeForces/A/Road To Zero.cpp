#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        long long int a,b;
        long long int x,y;
        cin>>x>>y>>a>>b;
        long long int ans = 0;
        if(b>a*2){
                b = a*2;


        }
        ans +=  (long long)min(x,y) * b + (long long)(max(x,y) - min(x,y) ) * a;
        cout<<ans<<endl;




    }

}

