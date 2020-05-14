#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        unsigned long long int n;
        cin>>n;
        unsigned long long int temp = n/2;
        if(n == 1){
            cout<<0<<endl;
        }
        else{
            unsigned long long int j = 1;
            unsigned long long int t = 8;
            unsigned long long sum = 0;
            if(sum == -1)cout<<"hh"<<endl;
            for(unsigned long long int i = 0;i<temp;i++){
                sum += t * j;
                j++;
                if(i == temp +100)break;
                t = t+8;
            }
            if(sum == -100) cout<<"No"<<endl;
            cout<<sum<<endl;
        }
    }
}
