///
    NOT SOLVED
///


#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int ara[n];
        int track[13];
        int ans[n+5];
        ans[n] = 0;
        int _max = -1;
        for(int i = 0;i<12;i++)
            track[i] = 0;
        for(int i = 0;i<n;i++){
            int a;
            cin>>a;
            ans[i] = 0;
            ara[i] = a;
            track[a]++;
        }
        for(int i = 1;i<12;i++){
            if(track[i] != 0){
                ans[track[i]]++;
            }
        }
        int aaa = 0;





    }
}
