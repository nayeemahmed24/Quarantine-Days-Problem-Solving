#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a = 0,b = 0,c = 0;
    bool flag = true;
    for(int i = 0;i<s.length();i++){
        if(s[i] == 'a'){
            if(b != 0 || c != 0){
                flag = false;
            }
            a++;
        }
        if(s[i] == 'b'){
            if(a == 0 || c != 0){
                flag = false;
            }
            b++;
        }

        if(s[i] == 'c'){
            if(a == 0 || b == 0){
                flag = false;
            }
            c++;
        }
    }
    if(a == 0 || b == 0 || (c != b && c != a )){
        flag = false;
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
