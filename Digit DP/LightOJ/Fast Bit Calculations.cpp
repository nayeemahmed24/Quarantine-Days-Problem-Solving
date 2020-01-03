/*
    Lightoj 1032
    Fast Bit Calculations
    Tags : Digit DP
    http://lightoj.com/volume_showproblem.php?problem=1032
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
vector<int> input;
ll dp[40][2][40][2];

ll digitDp(int pos, int prev ,ll cnt, int flag){
    if(pos == input.size()){
        return cnt;
    }
    if(dp[pos][prev][cnt][flag]!=-1)return dp[pos][prev][cnt][flag];

    ll res = 0;



    if(flag == 1){
        res += digitDp(pos+1,1,cnt + (prev == 1) ,flag);
        res += digitDp(pos+1,0,cnt  ,flag);

    }
    else{
        if(input[pos] == 1){
            res += digitDp(pos+1,0,cnt,1);
            res += digitDp(pos+1,1,cnt+ (prev == 1),flag);
        }
        else{
            res += digitDp(pos+1,0,cnt,flag);
        }
    }

    dp[pos][prev][cnt][flag] = res;
    return res;

}

ll solve(ll n){
    input.clear();
    memset(dp,-1,sizeof(dp));
    while(n>0){
        input.pb(n%2);
        n = n/2;
    }

    reverse(input.begin(),input.end());
    return digitDp(0,0,0,0);

}

int main(){
    int test,casen = 1;
    cin>>test;
    while(test--){
        ll n;
        cin>>n;
        cout<<"Case "<<casen++<<": ";
        cout<<solve(n)<<endl;
    }
}

