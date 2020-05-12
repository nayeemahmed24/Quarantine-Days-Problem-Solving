#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,k;
        cin>>n>>k;
        if(n/k < 1)cout<<"NO"<<endl;
        else if(n % 2 == 0){
            if(k % 2 == 1 && n/k >= 2){
                int sum = 0;
                cout<<"YES"<<endl;
                for(int i = 0;i<k-1;i++){
                    cout<<2<<" ";
                    sum += 2;
                }
                cout<<n-sum<<endl;
            }
            else if(k % 2 == 1 && n/k < 2){
                cout<<"NO"<<endl;
            }
            else{

                int sum = 0;
                cout<<"YES"<<endl;
                for(int i = 0;i<k-2;i++){
                    cout<<1<<" ";
                    sum += 1;
                }
                int one,two;
                one = (n - sum)/2;
                two = one;
                if(one % 2 == 0){
                    one--;
                    two++;
                }
                cout<<one<<" "<<two<<endl;
            }
        }
        else{
            if(k % 2 == 0 || n/k < 1){
                cout<<"NO"<<endl;
            }
            else{
                int sum = 0;
                cout<<"YES"<<endl;
                for(int i = 0;i<k-1;i++){
                    cout<<1<< " ";
                    sum++;
                }
                cout<<n-sum<<endl;
            }
        }
    }
}
