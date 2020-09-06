#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ara[n];
    for(int i = 0;i<n;i++ )
       cin>>ara[i];
    int k;
    cin>>k;

    map<int,int>rem;
    map<int,int>nums;
    for(int i = 0;i<n;i++){
        rem[abs(ara[i] - k )]++;
        nums[ara[i]]++;
    }
    for(int i = 0;i<n;i++){
       int rem = abs(k - ara[i]);
       if(rem == ara[i]){
            if(nums[rem]>=2){
                cout<<rem<< " "<<rem<<endl;
                nums[rem] -= 2;
                continue;
            }
       }
       else if(nums[rem] > 0 && nums[ara[i]] >0){
            cout<<ara[i]<< " "<<rem<<endl;
            nums[ara[i]]--;
            nums[rem]--;
       }
    }

}
