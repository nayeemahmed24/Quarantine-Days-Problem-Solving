#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int ans = 0;
    int ara1[n],ara2[m];
    map<int,int>sq1,sq2;
    for(int i = 0;i<n;i++){
        cin>>ara1[i];
        sq1[ara1[i]]++;
    }
    for(int i = 0;i<m;i++){
        cin>>ara2[i];
        sq2[ara2[i]]++;
    }

    for(int i = 0;i<n;i++){
        int sq = ara1[i] * ara1[i];
        for(int j = 0;j<m;j++){
            if(sq%ara2[j] != 0)continue;
            int rem = sq /ara2[j];
            if(rem != ara2[j]){
                if(sq2[rem] != 0){
                    ans++;
                    sq2[rem]--;
                    sq2[ara2[j]]--;
                    cout<<ara1[i] << " "<< rem<< " "<<ara2[j]<<endl;
                }
            }
            else if(rem == ara2[j]){
                if(sq2[rem] > 1){
                    ans++;
                    sq2[rem]--;
                    sq2[ara2[j]]--;
                cout<<ara1[i] << " "<< rem<< " "<<ara2[j]<<endl;
                }
            }
        }
    }
    for(int i = 0;i<m;i++){
        int sq = ara2[i] * ara2[i];
        for(int j = 0;j<n;j++){
            if(sq%ara1[j] != 0)continue;
            int rem = sq /ara1[j];
            if(rem != ara1[j]){
                if(sq1[rem] != 0){
                    ans++;
                    sq1[rem]--;
                    sq1[ara1[j]]--;
                    cout<<ara2[i] << " "<< rem<< " "<<ara1[j]<<endl;
                }
            }
            else if(rem == ara1[j]){
                if(sq1[rem] > 1){
                    ans++;
                    sq1[rem]--;
                    sq1[ara1[j]]--;
                cout<<ara2[i] << " "<< rem<< " "<<ara1[j]<<endl;
                }
            }
        }
    }
    cout<<ans<<endl;
}
