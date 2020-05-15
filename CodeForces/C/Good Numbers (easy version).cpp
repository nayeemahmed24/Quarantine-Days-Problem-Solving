#include<bits/stdc++.h>
using namespace std;
bool res(int n){
    while(n>0){
        if(n%3 == 2){
            return false;
        }
        n = n/3;
    }
    return true;
}

int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        while(1){
            if(res(n)){
                break;
            }
            n++;
        }
        cout<<n<<endl;
    }
}
