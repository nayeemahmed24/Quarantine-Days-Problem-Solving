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
    int n,m;
    cin>>n>>m;
    string s1[n+5],s2[m+5];
    for(int i = 1;i<=n;i++){
        cin>>s1[i];
    }
    for(int i = 1;i<=m;i++){
        cin>>s2[i];
    }


    int q;
    cin>>q;
    for(int i = 0;i<q;i++){
        int temp;
        cin>>temp;
        int ans1 = temp%(n);
        int ans2 = temp%(m);
        if(ans1 == 0){
            ans1 = n;
        }
        if(ans2 == 0){
            ans2 = m;
        }
        cout<<s1[ans1]<<s2[ans2]<<endl;
    }
}
