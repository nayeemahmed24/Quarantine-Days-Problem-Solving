/*
    Codeforces Round #536 (Div. 2)
    Lunar New Year and a Wander
    Tags : data structures,dfs and similar,graphs,greedy,shortest paths
    https://codeforces.com/problemset/problem/1106/D
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
vector<int>ve[100009];
int mark[100009];
void solve(){
    priority_queue<int,vector<int>,greater<int> > pq;
    pq.push(1);
    cout<<1;
    while(!pq.empty()){
        int u = pq.top();
        pq.pop();
        if(mark[u] == 1){

        }
        else{
            mark[u] = 1;
            if(u!=1)cout<<" "<<u;
            for(int i = 0;i<ve[u].size();i++){
                pq.push(ve[u][i]);
            }
        }
    }
    cout<<endl;


}



int main(){
   int n,m;
   cin>>n>>m;
   memset(mark,0,sizeof (mark));
   for(int i = 0;i<m;i++){
        int u,v;
        cin>>u>>v;
        ve[u].pb(v);
        ve[v].pb(u);
   }
   solve();


}

