#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int starti = n,startj = 1;
    int ara[n+1][n+1];
    ara[starti][startj] = 1;
    startj++;
    int cur = 2;
    bool up = true;
    while(1){
        ara[starti][startj] = cur;
        if(starti == n && startj == n)break;

        cur++;
        if(up){
            starti--;
            startj--;
        }
        else{
            starti++;
            startj++;
        }
        if(up){
            if(startj <1 ){
                startj++;
                up = false;

            }
        }
        else{
            if(starti>n){
                starti--;
                up = true;
            }
        }
    }

    starti = 1,startj = n;
    ara[starti][startj] = n*n;
    startj--;
    cur = n*n;
    cur--;
    up = false;
    //ara[starti][startj] = cur;
    while(1){
        ara[starti][startj] = cur;
        if(starti == n-1 && startj == n)break;

        cur--;
        //cout<<starti <<" "<<startj<<endl;
        if(up){
            starti--;
            startj--;
        }
        else{
            starti++;
            startj++;

        }
        if(up){
            if(starti<1){
                starti++;
                up = false;
            }

        }
        else{
            if(startj>n){
                startj--;
                up = true;
            }
        }
    }


    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cout<<ara[i][j]<<" ";
        }
        cout<<endl;    }
}
