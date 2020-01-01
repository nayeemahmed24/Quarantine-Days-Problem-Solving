/*
   How Many Zeroes?
   LightOj 1140
   Tags : Digit DP
   http://lightoj.com/volume_showproblem.php?problem=1140

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
#define in2(num1,num2) scanf("%lld %lld",&num1,&num2)
const int mx = 60;
typedef long long ll;
using namespace std;

vector<int> input;
int limit,tt;
int vis[2][2][mx][mx];
long long dp[2][2][mx][mx];

long long DP(int pos,int isSmall,int isStart,long long int value){
    if( pos == limit) return value;
    long long &ret = dp[isSmall][isStart][pos][value];
       int &v = vis[isSmall][isStart][pos][value];
    if( v == tt ) return ret ;
    v = tt ;
    int ses = isSmall ? 9 : input[pos];
    int i ;
    ret = 0 ;
    if( !isStart )
    for ( i = 0 ; i <= ses ; i++ )
    {
        ret += DP( pos + 1 , isSmall | i < input[pos] ,0, (i == 0) + value );
    }
    else
    {
         for ( i = 1 ; i <= ses ; i++ )
    {
        ret += DP( pos + 1 , isSmall | i < input[pos] ,0, (i == 0) + value );
    }
    ret += DP( pos + 1 , 1 ,1, 0 );
    }
    return ret ;


}



long long calculation(long long x){
    if(x<0)return 0;
    if(x<=9)return 1;
    input.clear();
    while(x){
        input.pb(x%10);
        x = x/10;
    }
    reverse(input.begin(),input.end());
    limit = input.size();
    tt++;
//    cout<<tt<<endl;
    return DP(0,0,1,0) + 1;

}


int main(){
    int test;
    cin>>test;
    int casen = 1;
    while(test--){

        long long int m,n;
        in2(m,n);
        long long ans = calculation(n) - calculation(m-1);
        printf("Case %d: %lld\n",casen,ans);
        casen++;
    }
}

