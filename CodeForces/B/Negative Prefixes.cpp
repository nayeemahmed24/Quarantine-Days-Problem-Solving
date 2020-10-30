#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int ara[n];
        int ord[n];
        for(int i = 0;i<n;i++)cin>>ara[i];
        vector<int> ve;
        for(int i = 0;i<n;i++){
            cin>>ord[i];
            if(ord[i] == 0){
                ve.push_back(ara[i]);
            }
        }

        sort(ve.begin(),ve.end());
        reverse(ve.begin(),ve.end());
        int j = 0;
        for(int i = 0;i<n;i++){
            if(ord[i] == 0){
                cout<<ve[j]<< " ";
                j++;
            }
            else{
                cout<<ara[i]<< " ";
            }
        }
        cout<<endl;
    }
}
