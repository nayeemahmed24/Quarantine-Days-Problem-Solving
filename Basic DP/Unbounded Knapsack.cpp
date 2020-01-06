/*
    HackerRank
    Unbounded Knapsack
    Tags : Knapsack, DP, BruteForce

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
int arr[3000],k,n;

int solve(int pos,int value){
    if(value>k)return 0;
    if(pos == n)return value;

    int res = 0;
    res += max(solve(pos,value+arr[pos]),solve(pos+1,value));
    return res;


}
int main(){
    int test;
    cin>>test;
    while(test--){
        cin>>n>>k;
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        cout<<solve(0,0)<<endl;
    }
}
