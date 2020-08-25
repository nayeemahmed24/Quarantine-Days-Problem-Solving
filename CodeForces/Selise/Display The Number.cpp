#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;

            if(n % 2 == 1 ){
                cout<<7;
                n -= 3;
            }
            while(1){
                if(n == 0)break;
                cout<<1;
                n -= 2;
            }

            cout<<endl;

    }
}
