#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int one = 0,zero = 0;
        for(int i = 0;i<n;i++){
            if(s[i] == '0')zero++;
            else
                one++;
        }
        int seg = n/k;
        if(zero % seg != 0 || one % seg != 0)cout<<"IMPOSSIBLE"<<endl;
        else{
            int ones = 0,zeros = 0;
            seg = n/k;
            ones = one/seg;zeros = zero/seg;
            string seg1 = "";
            while(ones != 0 || zeros !=0){
                if(zeros>0){
                    seg1 += "0";
                    zeros--;
                }
                else{
                    seg1 += "1";
                    ones--;
                }
            }
            string seg2 = seg1;
            reverse(seg2.begin(),seg2.end());
            for(int i = 0;i<seg;i++){
                if(i%2 == 0){
                    cout<<seg1;
                }
                else{
                    cout<<seg2;
                }
            }
            cout<<endl;
        }
    }
}
