#include<bits/stdc++.h>
using namespace std;
int main(){
    string mainPassword;
    cin>>mainPassword;
    string digits[10];
    map<string,int>mapping;
    for(int i = 0;i<10;i++){
        cin>>digits[i];
        mapping[digits[i]] = i;
    }
    for(int i = 0;i<8;i++){
        string temp = mainPassword.substr(i*10,10);
        cout<<mapping[temp];
    }
}
