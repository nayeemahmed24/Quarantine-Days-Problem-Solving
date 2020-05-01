#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int ara[n],used[300],ans[n*3];
        for(int i = 0;i<300;i++)used[i] = 0;
        for(int i = 1;i<=n;i++){
            cin>>ara[i];
            used[ara[i]] = 1;
            ans[i*2-1] = ara[i];
        }
        int anss = 0;
        for(int i = 1;i<=n;i++){
            int f = 0;
            for(int j = ara[i] + 1;j<=2*n;j++){
                if(used[j] == 0){
                    ans[i*2] = j;
                    used[j] = 1;
                     f = 1;
                    break;

                }
            }
            if(f == 0){
                anss = 1;
            }
        }
        if(anss == 1){
            cout<<-1<<endl;
            continue;
        }
        for(int i = 1;i<=n*2;i++)cout<<ans[i]<<" ";
        cout<<endl;

    }
}
