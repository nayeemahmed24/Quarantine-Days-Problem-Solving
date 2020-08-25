#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    map<string,string> mapping;
    for(int i = 0;i<n;i++){
        string s,ss;
        cin>>s>>ss;
        mapping[ss+";"] = s;
    }
    for(int i = 0;i<m;i++){
        string s,ss;
        cin>>s>>ss;
        cout<<s<<" "<<ss<<" #"<<mapping[ss]<<endl;

    }

}
