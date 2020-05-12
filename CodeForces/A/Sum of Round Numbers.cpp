#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        vector<string>ve;
        for(int i = 0;i<s.length();i++){
            if(s[i]!='0'){
                string temp = "a";
                temp[0] = s[i];
                for(int j = 0;j<s.length() - i - 1;j++){
                    temp += '0';
                }
                ve.push_back(temp);
            }
        }
        cout<<ve.size()<<endl;
        for(int i = 0 ;i<ve.size();i++){
            cout<<ve[i]<< " ";
        }
        cout<<endl;
    }
}
