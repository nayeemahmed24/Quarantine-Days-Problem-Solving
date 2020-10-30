#include<bits/stdc++.h>
using namespace std;
int main(){
    int ara[5] = {1,2,3,4,5};
    for(int i = 0 ;i<5;i++){
        cout<<(long long)&ara[i]<<" hi"<<endl;
        for(int j = 0;j<2;j++){
            cout<<(long long )&j<<endl;
        }
    }
}
