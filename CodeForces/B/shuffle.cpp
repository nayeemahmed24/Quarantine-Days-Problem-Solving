#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,x,m;
        cin>>n>>x>>m;
        int lft = x;
        int rgt = x;
        for(int i = 0 ;i<m;i++){
            int a,b;
            cin>>a>>b;
            if((a <= lft &&  b >=lft) || (a<= rgt && b>=rgt)  ){
                lft = min(a,lft);
                rgt = max(b,rgt);
            }
        }
        cout<<rgt - lft + 1<<endl;
    }
}
