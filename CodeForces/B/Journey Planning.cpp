#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int ara[n+5];
    vector< pair <int,int> >trgt;
    for(int i = 1; i<=n; i++)
    {
        cin>>ara[i];
        trgt.push_back( {i - ara[i],i});

    }

    trgt.push_back({-1000000,0}) ;
    sort(trgt.begin(),trgt.end());
    long long current = trgt[0].first;
    long long sum = 0;
    long long ans = 0;
    for(int i = 1; i<=n; i++)
    {


        if(current != trgt[i].first)
        {

            ans = max(ans,sum);
            sum = abs(ara[trgt[i].second]);
            current = trgt[i].first;
        }
        else
        {
            sum += abs(ara[trgt[i].second]);
        }
    }

    ans = max(ans,sum);
    cout<<ans<<endl;

}
