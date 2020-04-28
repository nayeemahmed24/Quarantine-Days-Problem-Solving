#include<bits/stdc++.h>
using namespace std;



int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        vector<int>ara;
        for(int i = 0;i<n;i++){
            int a;
            cin>>a;
            ara.push_back(a);
        }
        sort(ara.begin(),ara.end());
        reverse(ara.begin(),ara.end());
        for(int i = 0;i<ara.size();i++)
            cout<<ara[i]<<" ";
        cout<<endl;

    }
}
