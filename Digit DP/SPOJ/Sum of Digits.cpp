/*
    CPCRC1C - Sum of Digits
    Tags : Digit DP
    https://www.spoj.com/problems/CPCRC1C/
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define INF (int)1e9
#define PI acos(-1.0)
#define sc scanf
#define pf printf
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define in1(num) scanf("%d",&num)
#define in2(num1,num2) scanf("%d %d",&num1,&num2)
typedef long long ll;
using namespace std;
vector<int>input;
long long dp[12][400][2];
long long int digitDp(int pos,int sum,int flag){
    if(pos == input.size())return sum;
    if(dp[pos][sum][flag]!=-1)return dp[pos][sum][flag];
    int limit;
    if(flag == 0){
        limit = input[pos];
    }
    else{
        limit = 9;
    }
    long long int res = 0;

    for(int i = 0;i<=limit;i++){
        int tempflag = flag;
        if(flag == 0 && i<input[pos])tempflag = 1;
        res += digitDp(pos+1,sum+i,tempflag);
    }
    dp[pos][sum][flag] = res;
    return res;

}

int main(){
    while(1){
        ll a,b;
        cin>>a>>b;
        if(a == -1 && b == -1){
            return 0;
        }
        a--;
        while(a>0){
            input.pb(a%10);
            a = a/10;
        }
        reverse(input.begin(),input.end());
        memset(dp,-1,sizeof(dp));
        long long int ans1 = digitDp(0,0,0);
        input.clear();

        while(b>0){
            input.pb(b%10);
            b = b/10;
        }

        reverse(input.begin(),input.end());
        memset(dp,-1,sizeof(dp));
        long long int ans2 = digitDp(0,0,0);
        input.clear();
        cout<<ans2 - ans1<<endl;


    }
}

