#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        long long int n;
        cin>>n;
        cout<<2<<endl;
        if(n == 2){
            cout<<1<<" 2"<<endl;
            continue;
        }
        cout<<n<<" "<<n-2<<endl;
        int skip = n-2;
        long long int div = (n+(n-2))/2;
        n = n-1;
        while(1){
            if(n <1)break;
            if(n == skip){
                n--;
                continue;
            }
            cout<<n << " "<<div<<endl;
            div  = (n+div)/2;
            n--;
        }

    }
}
