#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<char,int>CharTrack;
    for(int i = 0;i<s.length();i++){
        CharTrack[s[i]]++;
    }
    bool flag = true;
    string ss = "micrsft";
    for(int i = 0;i<ss.length();i++){
        if(CharTrack[ss[i]] == 0){
            flag = false;
            break;
        }
    }
    if(CharTrack['o']<1){
        flag = false;
    }
    if(flag){
        cout<<"We both love Microsoft!";
    }
    else{
        cout<<"Only I love Microsoft!";
    }
}
