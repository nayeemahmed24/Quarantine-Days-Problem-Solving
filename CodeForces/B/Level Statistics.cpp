#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int play[n],clr[n],plays[n],clrs[n];
        for(int i = 0;i<n;i++){
            cin>>play[i]>>clr[i];
        }
        int flag = 0;
        if(play[0]<clr[0])flag = 1;
        for(int i = 1;i<n;i++){
            if(play[i]<clr[i])flag = 1;
            if(play[i-1]>play[i])flag = 1;
            if(clr[i-1]>clr[i])flag = 1;
            if(play[i] - play[i-1] <clr[i] - clr[i-1])flag = 1;
        }
        if(flag == 1)cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
        }

    }
}
