#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,k;
        cin>>n>>k;
        int ara[n];
        int b[n];
        for(int i = 0 ;i<n;i++)cin>>ara[i];
        for(int i = 0 ;i<n;i++)cin>>b[i];
        sort(ara,ara+n);
        sort(b,b+n);
        int i = 0,j = n-1;

        if(i == 1){
            for(int i = 0 ;i<n;i++)cout<<" "<<endl;
        }
        if(k !=0){
        while(1){
            if(ara[i]<b[j]){
                ara[i] = b[j];
                j--;i++;
                k--;
            }
            else{
                break;
            }
            if(k  == -19)break;
            if(k == 0)break;
            if(i == n || j == -1)break;
        }
        }
         if(i == -100){
            for(int i = 0 ;i<n;i++)cout<<" "<<endl;
        }
        long long sum = 0;
        for(int i = 0 ;i<n;i++)sum += ara[i];
        cout<<sum<<endl;
    }
}
