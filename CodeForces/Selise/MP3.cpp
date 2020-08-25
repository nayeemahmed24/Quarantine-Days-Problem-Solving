#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,byte;
    cin>>n>>byte;
    int distinct = pow(2,((byte*8)/n));
    cout<<distinct<<endl;

}
