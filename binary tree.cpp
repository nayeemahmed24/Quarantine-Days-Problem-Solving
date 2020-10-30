#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nodes = pow(2,n) -1;
    vector<vector <int> >  vec;
    for(int i = 0;i<n;i++){
        int lim = pow(2,i);
        vector<int>temp;
        while(lim--){
            temp.push_back(nodes--);
        }
        reverse(temp.begin(),temp.end());
        vec.push_back(temp);
    }
    for(auto x:vec){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}
