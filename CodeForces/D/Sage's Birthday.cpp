#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ara[n];
    for(int i = 0;i<n;i++)cin>>ara[i];
    sort(ara,ara+n);
    int i = 0;
    int j = n-1;
    vector<int>ans;
    while(i<=j){
        ans.push_back(ara[j]);
        j--;
        if(j<i)break;
        ans.push_back(ara[i]);
        i++;
    }
    int anss = 0;
    for(int i = 1;i<n-1;i++){
        if(ans[i-1] > ans[i] && ans[i+1] > ans[i]){
            anss++;
        }
    }
    cout<<anss<<endl;
    for(int i = 0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}

