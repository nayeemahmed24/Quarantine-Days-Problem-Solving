#include<bits/stdc++.h>
using namespace std;
vector<int> primes;
void GetPrime(int n){
    int ara[n+1];
    for(int i = 0;i<=n;i++)ara[i] = 1;

    for(int i = 2;i*i<=n;i++){

        if(ara[i] == 1){
            for(int j = i * i; j<= n ;j+=i ){
                ara[j] = 0;
            }
        }
    }
    for(int i = 3;i<=n;i++){
        if(ara[i] == 1){
            primes.push_back(i);
        }
    }

}
int main(){
    long long n;
    cin>>n;
    long long int ans = 0;
    GetPrime(100009);
    long long int main_n = n;
    while(1){
        if(n == 0)break;
        if(n%2 == 0 ){
            break;
        }
        for(int i = 0;i<primes.size();i++)
        {

            if(n % primes[i] == 0){
                n -= primes[i];
                ans++;
                break;
            }
        }
        if(main_n == n){
            n -= n;
            ans++;
        }
    }
    if(n == 0){
        cout<<ans<<endl;
        return 0;
    }
    cout<<ans + n / 2<<endl;
}
