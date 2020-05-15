#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int ara[n+5];
        int used[n+5];
        int ans[n+5];
        for(int i  = 1;i<=n;i++){
            cin>>ara[i];
            used[i] = 0;
        }

        for(int i = 1;i<=n;i++){
            if(used[i] == 0){
                vector<int> path;
                int t = i;
                while(used[t] == 0){
                    path.push_back(t);
                    used[t] = 1;
                    t = ara[t];
                }
                for(int j = 0;j<path.size();j++)ans[path[j]] = path.size();
            }
        }

        for(int i = 1;i<=n;i++)cout<<ans[i]<<" ";
        cout<<endl;


    }
}
