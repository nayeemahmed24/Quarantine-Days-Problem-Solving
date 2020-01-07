/*
    Boredome
    Codeforces Round #260 (Div. 2) - C
    tags: DP
    https://codeforces.com/problemset/problem/455/A

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

map<ll,ll>mm;
ll ara[100000+9];
ll dp[100000+9];

ll solve(int x){
    if(x<=0)return 0;
    if(dp[x]!=-1)return dp[x];
    ll res = 0;
    res = max(solve(x - 1),solve(x - 2)+ mm[x]*x);
     dp[x] = res;
     return res;

}

int main(){
    memset(dp,-1,sizeof(dp));
    mm.clear();
    int n;
    cin>>n;
    int i = 0;
    ll maxV = 0;
    while(n--){
        cin>>ara[i];
        mm[ara[i]]++;
        maxV = max(maxV,ara[i]);
        i++;
    }
//    cout<<maxV<<endl;
    cout<<solve(maxV)<<endl;
}
