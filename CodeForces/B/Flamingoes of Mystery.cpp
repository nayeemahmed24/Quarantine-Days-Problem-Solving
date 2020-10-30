#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int inp;
    int ara[n+1];
    int sum;
    cout<<"? "<<1<< " "<<n;
    fflush(stdout);
    cin>>sum;
    int prev;
    prev = sum;
    for(int i = n-1;i>=2;i--){
        cout<<"? "<<1<< " "<<i;
        fflush(stdout);
        cin>>inp;
        ara[i+1] = prev - inp;
        prev = inp;

    }
    cout<<"? "<<2<< " "<<n;
    fflush(stdout);
    cin>>inp;
    ara[1] = sum - inp;
    inp = 0;
    for(int i = 1;i<=n;i++){
        if(i == 2)continue;
        inp += ara[i];
    }
    ara[2] = sum - inp;
    cout<<"! ";
    for(int i = 1;i<=n;i++)
        cout<<ara[i]<< " ";


}
