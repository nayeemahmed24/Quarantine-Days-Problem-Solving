#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,a,b;
        cin>>n>>a>>b;
        int dif =  b-a;
        int ans = dif;
        int cnt = n;
        while(dif>=1){
             cnt = n;
             bool flag = false;
             int cur = b;
             if((b-a)%dif == 0 && (b-a)/dif <=n-1  ){
                ans = dif;

             }
             dif--;
        }
        int cur = b;
        cout<<cur<< " ";

        cnt--;
             while(1){
                cur -= ans;
                if(cur <=0){
                    break;
                }
                cout<<cur<<" ";
                cnt--;
                if(cnt== 0)break;
             }
             cur = b;
             while(cnt>0){
                cur += ans;
                cout<<cur<<" ";
                cnt--;
                if(cnt== 0)break;
             }


        cout<<endl;
    }
}
