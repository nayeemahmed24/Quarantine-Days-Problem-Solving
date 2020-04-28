#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int ara[n];
        int max_ = -1;
        int track[200009];
        memset(track,0,sizeof(track));
        for(int i = 0;i<n;i++){
            cin>>ara[i];
            max_ = max(ara[i],max_);

        }
        track[n] = 0;
        vector<int>ans;
        int flag = 0;

        for(int i = 0;i<max_;i++){
                track[ara[i]] = 1;
        }
        for(int i = 1;i<=max_;i++){
            if(track[i] == 0)flag = 1;
        }

        memset(track,0,sizeof(track));
        for(int i = max_;i<n;i++){
                track[ara[i]] = 1;
        }

        for(int i = 1;i<=n-max_;i++){
            if(track[i] == 0)flag = 1;
        }

        int cnt = 0;
        if(flag == 0){
            cnt = 1;
            ans.push_back(max_);
            ans.push_back(n - max_);
        }

        memset(track,0,sizeof(track));
        flag = 0;

        for(int i = 0;i<n - max_;i++){
                track[ara[i]] = 1;
        }
        for(int i = 1;i<=n-max_;i++){
            if(track[i] == 0)flag = 1;
        }


        memset(track,0,sizeof(track));

        for(int i = n - max_;i<n;i++){
            track[ara[i]] = 1;

        }
        for(int i = 1;i<=max_;i++){
            if(track[i] == 0)flag = 1;
        }

        if(flag == 0){
                cnt++;
                ans.push_back(n - max_);
                ans.push_back(max_);
        }
        cout<<cnt<<endl;
        if(cnt == 1){
            cout<<ans[0] << " "<< ans[1]<<endl;

        }
        if(cnt == 2 ){
            cout<<ans[0] << " "<< ans[1]<<endl;
            cout<<ans[2] << " "<< ans[3]<<endl;

        }

    }
}
