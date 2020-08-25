#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    set<char> CharSet;
    for(int i = 0;i<s.length();i++){
        CharSet.insert(s[i]);
    }
    cout<<26 - CharSet.size()<<endl;
}
