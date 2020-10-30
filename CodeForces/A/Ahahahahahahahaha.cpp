#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int zero = 0;
        for(int i = 0;i<n;i++){
            int temp;
            cin>>temp;
            if(temp == 0)zero++;
        }

        if(zero>=n/2){
            cout<<n/2<<endl;
            for(int i = 0;i<n/2;i++){
                cout<<0 <<" ";
            }
        }
        else{
            int  z = n/2;
            if(z%2 == 1){

                    cout<<(n/2) + 1<<endl;

                    for(int i = 0;i<(n/2)+1;i++){
                        cout<<1 <<" ";
                    }
            }

            else{
                        cout<<n/2<<endl;

                    for(int i = 0;i<(n/2);i++){
                        cout<<1 <<" ";
                    }

            }
        }
        cout<<endl;
    }
}
