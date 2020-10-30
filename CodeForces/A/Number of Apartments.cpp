#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int cnt = 0;
        bool flag = true;
        for(int i = 0;;i++){
            cnt = i * 3;
            //cout<<cnt<<endl;
            if(cnt > n)break;
            for(int j = 0;;j++){
                int new_cnt = 0;
                new_cnt = cnt +j*5;
                if(new_cnt > n)break;
                if((n - new_cnt) % 7 == 0 || new_cnt == n){
                    flag = false;
                    cout<<i<<" "<<j<<" "<<(n-new_cnt)/7<<endl;
                    break;
                }
            }
            if(flag == false)break;
        }
        if(flag)cout<<-1<<endl;
    }
}
