#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans = 0;
    int cnt = 0;
    int _min = 0;
    int start = 0;
    int flag = 0;
    for(int i = 0;i<n;i++){
        if(s[i] == '(' ){
            if(flag == 1){
                start--;
                if(cnt == start){
                        ans += _min*(-2);
                        _min = 0;
                        start = 0;
                        cnt = 0;
                        flag = 0;
                }
            }
            else cnt++;

        }
        else {
            cnt--;
            if(cnt<0){
                _min = min(_min,cnt);
                flag = 1;
            }
        }
    }
    if(cnt!=0){
        cout<<-1<<endl;
    }
    else
        cout<<ans<<endl;
}
