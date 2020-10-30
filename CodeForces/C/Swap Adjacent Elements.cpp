#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ara[n];
    for(int i = 0;i<n;i++){
        cin>>ara[i];
    }
    string s;
    cin>>s;
    map<int,pair<int,int> > track;
    int start = -1,_end = -1;
    for(int i = 0;i<s.length();i++ ){
        if(s[i] == '1'){
            if(start == -1){
                start = i;
                track[i] = {start,-1};
            }
            else{
                track[i] = {start,-1};
            }
        }
        else if(s[i] == '0'){
            if(start != -1){

                _end = i;
            }
            else{
                track[i] = {i,i};
            }
        }
        if(start != -1 && _end != -1){
            track[i] = {start,_end};
            start = -1;
            _end = -1;
        }

    }
    if(start != -1 && _end == -1){
        track[n-1] = {start,n-1};
    }
    else{
        track[n-1] = {n-1,n-1};
    }
    for(int i = n-1;i>=0;i--){
        if(track[i].second == -1){
            track[i].second = track[i+1].second;
        }
    }
    bool flag = true;
    for(int i = 0;i<n;i++){
        if(track[i].first+1<=ara[i] && track[i].second+1 >= ara[i]  ){

        }
        else{
            flag = false;
            break;
        }
    }
    if(flag)cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
