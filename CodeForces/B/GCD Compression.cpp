#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int ara[n*2];
        int odd = 0,even = 0;
        vector< pair<int,int> >oddL,evenL;
        for(int i = 0;i<n*2;i++){
            cin>>ara[i];
            if(ara[i]%2==1){
                odd++;
                oddL.push_back({ara[i],i+1});
            }
            else{
                even++;
                evenL.push_back({ara[i],i+1});
            }
        }
        if(even % 2 == 1 && odd %2 == 1){
            even--;
            odd--;
        }
        else{
            if(even != 0)even -=2;
            else odd -= 2;
        }

        for(int i = 0;i<even;i+=2){
            cout<<evenL[i].second<< " "<< evenL[i+1].second<<endl;
        }
        for(int i = 0;i<odd;i+=2){
            cout<<oddL[i].second<< " "<< oddL[i+1].second<<endl;
        }
    }
}
