#include<bits/stdc++.h>
using namespace std;
int main(){
        int n,m;
        cin>>n>>m;
        string answers[n];
        for(int i = 0;i<n;i++)cin>>answers[i];
        int points[m];
        for(int i = 0;i<m;i++){
            cin>>points[i];
        }
        int  ans = 0;
        for(int i = 0 ;i<m;i++){
            map<char,int> mapping;
            int _max = -1;
            for(int j = 0;j<n;j++){
                mapping[answers[j][i]]++;
                _max = max(_max,mapping[answers[j][i]]);
            }
            ans += points[i] * _max;
        }
        cout<<ans<<endl;

}
