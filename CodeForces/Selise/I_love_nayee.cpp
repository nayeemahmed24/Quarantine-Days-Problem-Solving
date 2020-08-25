#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)cin>>arr[i];
    int _max = arr[0];
    int _min = arr[0];
    int ans = 0;
    for(int i = 1;i<n;i++){
        if(arr[i] > _max){
            _max = arr[i];
            ans++;
        }
        else if(arr[i]< _min){
            _min = arr[i];
            ans++;
        }
    }
    cout<<ans<<endl;
}
