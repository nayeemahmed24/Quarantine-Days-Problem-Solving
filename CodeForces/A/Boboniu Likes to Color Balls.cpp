#include<bits/stdc++.h>
using namespace std;
bool res(int a,int b,int c,int d){
        int odd = 0;
        if(a % 2 == 1)odd++;
        if(b % 2 == 1)odd++;
        if(c % 2 == 1)odd++;
        if(d % 2 == 1)odd++;
    if(odd>1)return false;
    else return true;

}
int main(){
    int test;
    cin>>test;
    while(test--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(res(a,b,c,d))cout<< "Yes"<<endl;
        else if(a > 0 && b> 0 && c> 0 && res(a-1,b-1,c-1,d+1))
            cout<<"Yes"<<endl;
        else{
            cout<<"No"<<endl;
        }
    }
}
