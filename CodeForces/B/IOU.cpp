#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    map<int,int>track;
    for(int i = 0;i<m;i++){
        int temp1,temp2,c;
        cin>>temp1>>temp2>>c;
        track[temp1] += c;
        track[temp2] -= c;
    }
    long long sum = 0;
    for(int i = 1;i<=n;i++){
        if(track[i]>0){
            sum += track[i];
        }
    }
    cout<<sum<<endl;
}
