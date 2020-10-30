#include<bits/stdc++.h>
using namespace std;
long long res(long long int a,long long int b,long long int x,long long int y,long long k)
{
    long long int aa = min(a - x,k);
    a -= aa;
    k -= aa;
    long long int bb = min(b-y,k);
    b -= bb;
    k -= bb;
    return a * b;

}
int main(){
    int test;
    cin>>test;
    while(test--){
        long long int a,b,x,y,k;
        cin>>a>>b>>x>>y>>k;
        long long int ans = min(res(a,b,x,y,k),res(b,a,y,x,k));
        cout<<ans<<endl;



    }
}
