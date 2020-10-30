#include<bits/stdc++.h>
using namespace std;
long long ret(string s){
     long long an = 0;
        long long int j = 1;
        for(int i = s.length() - 1;i>=0;i--){
                an += (s[i] - '0') * j;
                j = j * 10;
            }
        return an;

}
int main(){
    int test;
    cin>>test;
    while(test--){
        string s;
        int n;
        cin>>s>>n;
        long long int sum = 0;
        for(int i = 0;i<s.length();i++){
            sum += s[i] - '0';
        }
        string ans = s;
        if(sum<=n){
            cout<<0<<endl;
        }
        else{
            for(int i = s.length()-1;i>=0;i--){
                if(sum < n){
                    if(ans[i] != '9'){
                        ans[i] = (char)(((ans[i] - '0') + 1)+'0');
                         break;
                    }
                    else{
                        ans[i] = '0';
                        continue;
                    }

                }
                long long int less_ = s[i] - '0';
                sum -= less_;
                ans[i] = '0';

            }
            if(ans[0] == '0'){
                ans = "1" + ans;
            }
            cout<<ret(ans) - ret(s)<<endl;




        }
    }

}
