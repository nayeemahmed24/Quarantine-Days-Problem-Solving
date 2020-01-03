/*
    Lightoj 1068 - Investigation
    Tags : Digit Dp
    http://lightoj.com/volume_showproblem.php?problem=1068


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
#define in1(num) scanf("%lld",&num)
#define in2(num1,num2) scanf("%lld %lld",&num1,&num2)
typedef long long ll;
using namespace std;
vector<ll> input;
ll k;
ll dp[12][90][100][2];

long long digitDp(ll pos,ll rem,ll sum,ll flag)
{
    if(pos == input.size())
    {
        if(rem == 0 && sum == 0)
            return 1;
        return 0;
    }
    if(dp[pos][rem][sum][flag] != -1)
        return dp[pos][rem][sum][flag] ;

    ll limit,res = 0;

    if(flag == 0)
    {
        limit = input[pos];
    }
    else
    {
        limit  = 9;
    }

    for(ll i = 0; i<=limit; i++)
    {
        int flag1 = flag;
        if(i<input[pos])
        {
            flag1 = 1;
        }

        res += digitDp(pos+1,(rem*10+i)%k,(sum+i)%k,flag1);

    }

    dp[pos][rem][sum][flag] = res;
    return res;

}




long long solve(ll x)
{
    input.clear();
    if(k>90)
        return 0;
    while(x>0)
    {
        input.pb(x%10);
        x = x/10;
    }
    memset(dp,-1,sizeof(dp));
    reverse(input.begin(),input.end());

    return digitDp(0,0,0,0);


}






int main()
{
    int test;
    cin>>test;
    int casen = 1;
    while(test--)
    {
        ll l,r;
        in1(l);
        in2(r,k);
        cout<<"Case "<<casen<<": ";
        casen++;
        cout<<solve(r) - solve(l-1)<<endl;
    }


}

