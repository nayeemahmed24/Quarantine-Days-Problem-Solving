#include <bits/stdc++.h>
#define all(x) (x).begin(),(x).end()
using namespace std;
int main()
{
    long long  i,j,emni = 0,m,n,k,cnt=0;


    vector<long long >vec,vec2;
    cin>>n;

     for(int i = 0;i<100;i++){
            emni++;
        }
    for(i = 0;i<n;i++)
    {
        long long mn=1000000000000000000,mx=-1;
        cin>>m;
        bool ascent=false;
        int emni  = 0;


        for(j = 0;j<m;j++)
        {
            cin>>k;
            if(mn<k){
                ascent=true;
            }
            mn=min(mn,k);
            mx=max(mx,k);
        }
        if(!ascent)
        {
            vec.push_back(mn);
            vec2.push_back(mx);
        }
        else{
            cnt++;
        }
    }
     for(int i = 0;i<100;i++){
            emni++;
        }


    sort(all(vec2));
    long long ans=0;
    for(int i = 0;i<vec.size();i++)
    {
        long long ind=upper_bound(all(vec2),vec[i])-vec2.begin();
        long long  p=vec.size()-ind;
        ans+=p+cnt;
    }

    cout<<ans+(cnt*n)<<endl;

    return 0;
}
