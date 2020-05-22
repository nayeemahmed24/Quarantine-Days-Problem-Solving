#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n0,n1,n2;
        cin>>n0>>n1>>n2;
        if(n1 == 0){
            if(n0!=0){
                for(int i = 0;i<=n0;i++ )cout<<0;
                cout<<endl;
            }
            else{
                for(int i = 0;i<=n2;i++ )cout<<1;
                cout<<endl;
            }
        }
        else{
            string s = "";
            for(int i = 1;i<=n1+1;i++ ){
                if(i%2 == 1)s+="1";
                else s += "0";
            }
            string temp = "";
            for(int i = 0;i<n2;i++){
                temp += "1";
            }
            cout<<temp;
            int i = 0;
            cout<<s[i];
            i++;
            for(int j = 0;j<n0;j++)cout<<0;
            for(;i<s.length();i++)cout<<s[i];
            cout<<endl;
        }
    }
}
