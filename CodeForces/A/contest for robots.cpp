#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ara[n],ara1[n];
    for(int i = 0 ;i<n;i++)cin>>ara[i];
    for(int i = 0 ;i<n;i++)cin>>ara1[i];
    int win = 0,lose = 0;
    for(int i = 0 ;i<n;i++){
        if(ara[i] == 0 && ara1[i] == 1 )lose++;
        if(ara[i] == 1 && ara1[i] == 0 )win++;
    }
    if(win == 0)cout<<-1<<endl;
    else if(win > lose){
        cout<<1<<endl;
    }
    else{
        int ans = (lose+1)/win;
        if((lose+1)%win != 0)ans++;
        cout<<ans<<endl;
    }
}
