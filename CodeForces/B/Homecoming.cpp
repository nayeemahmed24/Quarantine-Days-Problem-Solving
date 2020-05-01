#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int a,b,p;
        cin>>a>>b>>p;
        string s;
        cin>>s;
        char prev = s[s.length()-1];
        int n = s.length();
        for(int i = s.length()-2;i>=0;i--){
            //cout<<i<<  " "<< p<<endl;
            if(s.length()-2 == i){
                if(s[i] == 'A'){
                    p -= a;
                    prev = s[i];
                }
                else{
                    p -= b;
                    prev = s[i];
                }
            }
            else if(s[i] != prev ){
                if(s[i] == 'A'){
                    p -= a;
                    prev = s[i];
                }
                else{
                    p -= b;
                    prev = s[i];
                }

            }
            if(p<0){
                    cout<<i+2<<endl;
                    break;
            }
        }
        if(p >= 0)cout<<1<<endl;
    }
}
