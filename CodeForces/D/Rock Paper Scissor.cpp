#include<bits/stdc++.h>
using namespace std;
int main(){

        long long int n;
        cin>>n;
        long long int arock,ascissor,apaper,brock,bscissor,bpaper;
        cin>>arock>>ascissor>>apaper>>brock>>bscissor>>bpaper;
        long long int alice_max = min(arock,bscissor) + min(ascissor,bpaper) + min(apaper,brock);
        long long int bob_max = min(brock,ascissor) + min(bscissor,apaper) + min(bpaper,arock);

        brock -= min(brock,ascissor);
        bscissor -= min(bscissor,apaper);
        bpaper -= min(bpaper,arock);

        long long int draw = min(arock,brock) + min(apaper,bpaper) + min(ascissor,bscissor);
        cout<<n - (draw + bob_max)<<" "<<alice_max<<endl;

    }



