#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    map<int,int> used;
    cin>>n>>s;
    int singleSum = 0;
    int bigSum = 0;
    if(n *2 <= s ){
        cout<<"YES"<<endl;
        for(int i = 0;i<n-1;i++){
            singleSum += 2;
            cout<<2<<" ";
        }
        bigSum = s - singleSum;
        cout<<bigSum<<endl<<1<<endl;
        return 0;
    }
    cout<<"NO"<<endl;

}
