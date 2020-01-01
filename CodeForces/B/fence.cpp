/*
    Codeforces Round #211 (Div. 2)
    Fence
    tags: brute force, dp
    http://codeforces.com/contest/363/problem/B


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
int main(){
    int n,k;
    cin>>n>>k;
    int h[n+2];
    h[0] = 0;
    for(int i = 1;i<=n;i++){
        cin>>h[i];
        h[i] = h[i-1] + h[i];
    }
    int minsum = INF;
    int ans;
    for(int i = 1;i<=n-k+1;i++){
//        cout<<h[i]<<endl;
        int temp = h[i+k-1] - h[i-1] ;
//        cout<< i << " " << temp <<endl;
        if(temp<minsum){
                minsum = min(h[i+k-1] - h[i-1] ,minsum);
                ans = i;

        }

    }

    cout<< ans << endl;



}

