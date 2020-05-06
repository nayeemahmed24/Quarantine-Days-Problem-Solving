#include<bits/stdc++.h>
using namespace std;
int digitSum(int nn){
    int ans = 0;
    while(nn>0){
        ans += nn%10;
        nn = nn/10;
    }
    return ans;
}
int sum[28][1000009];
int main(){


    for(int i = 0;i<=999999;i++){
        sum[abs(digitSum(i/1000) - digitSum(i%1000))][i] = 1;
    }

    for(int i = 0;i<=27;i++){
        for(int j = 1;j<=999999;j++){
            sum[i][j] += sum[i][j-1];
        }
    }


    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        long long int number = 0;
        int mul = 1;
        for(int i = 5;i>=0;i--){
            number += (s[i] - '0')*mul;
            mul*=10;
        }

        int left = number /1000;
        int right = number % 1000;

        int target = abs(digitSum(left) - digitSum(right));
        int ans = 0;

        for(int i = 0;i<=target-1;i++){
            ans += sum[i][number-1];
        }
        cout<<ans<<endl;


    }
}

