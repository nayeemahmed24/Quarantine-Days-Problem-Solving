#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        map<int,int>nums;
        int ara1[n],ara2[n-1];
        for(int i = 0;i<n;i++){
            cin>>ara1[i];
        }
        for(int i = 0;i<n-1;i++){
            cin>>ara2[i];
            nums[ara2[i]]++;
        }
        for(int i = 0;i<n;i++){
            if(nums[ara1[i]] == 0)cout<<ara1[i]<<endl;
            if(nums[ara1[i]] == 0)continue;
            nums[ara1[i]]--;

        }
    }
}
