#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,x;
        cin>>n>>x;
        int ara[n];
        int sum = 0;
        for(int i = 0;i<n;i++)
        {
            cin>>ara[i];
            sum += ara[i];
        }
        if(sum % x != 0){
            cout<<n<<endl;
            continue;
        }
        int i = 0,j = n-1;
        int ans = n;
        bool flag = true;
        while(i<j){
            if(ara[i] % x != 0){
                ans --;
                flag = false;
                break;
            }
            else if(ara[j] % x != 0){
                ans--;
                flag = false;
                break;
            }
            ans--;
            i++;
            j--;
        }
        if(flag)ans = -1;
        cout<<ans<<endl;

    }
}
