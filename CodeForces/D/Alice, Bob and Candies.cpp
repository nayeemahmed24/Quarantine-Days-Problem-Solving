#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        int ara[n+5];
        for(int i = 0;i<n;i++)cin>>ara[i];
        long long int prev = 0;
        int i = 0,j = n-1;
        int turn = 0,total = 0;
        long long int a = 0,b = 0;
        while(i<=j){
            total++;
            if(turn == 0){
                int sum = 0;
                while(1){
                    sum += ara[i];
                    i++;
                    if(sum > prev )break;

                    if(i>j)break;

                }
                prev = sum;
                a  += sum;
                turn = 1;
            }
            else{
                int sum = 0;
                while(1){
                    sum += ara[j];
                    j--;
                    if(sum > prev)break;

                    if(i>j)break;
                }
                prev = sum;
                b += sum;
                turn = 0;
            }
        }
        cout<<total << " "<< a << " " <<b<<endl;
    }
}
