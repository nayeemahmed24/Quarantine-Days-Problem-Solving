/*
    LightOj 1025
    The special menu
    Tags : DP Greedy
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
string s;
int dp[200][200];

int solve(int i,int j){
    if(i>j)return 0;
    if(i == j) return 1;
    if(dp[i][j] != -1)return dp[i][j];
    int res = 0;
    if(s[i] == s[j]){
        res += solve(i+1,j)+solve(i,j-1)+1;
    }
    else{
        res += solve(i+1,j) + solve(i,j-1) - solve(i+1,j-1);
    }
    dp[i][j] = res;
    return res;


}

int main(){
    int test;
    cin>>test;
    int casen = 1;
    while(test--){
        memset(dp,-1,sizeof(dp));
        cin>>s;
        cout<<"Case "<<casen++<<": ";
        cout<<solve(0,s.length()-1)<<endl;
    }
}

