#include<bits/stdc++.h>
using namespace std;
bool isPerfectSquare(long double x)
{
  long double sr = sqrt(x);
  return ((sr - floor(sr)) == 0);
}
int main(){
    int test;
    cin>>test;
    while(test--){
        long double s;
        cin>>s;
        bool check = isPerfectSquare(s);
        if(check){
            long long sq = sqrt(s);
            sq = sq - 2;
            cout<<(sq*(sq+1))/2<<endl;
        }
        else{
            cout<<0<<endl;
        }

    }
}
