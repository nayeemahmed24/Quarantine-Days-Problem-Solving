#include<bits/stdc++.h>
using namespace std;
int main(){

        int n;
        cin>>n;
        string s;
        cin>>s;
        char _min = 'a';
        bool falg = true;
        for(int i = 0;i<n-1;i++ ){
            if(s[i+1] < s[i] && falg){
                falg = false;
                continue;
            }
            cout<<s[i];
        }
        if(!falg)cout<<s[n-1];
        cout<<endl;

    }

