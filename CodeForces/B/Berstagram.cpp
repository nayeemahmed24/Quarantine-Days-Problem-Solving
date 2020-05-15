#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int ara[m],number[n+5];
    int resL[n+5],resH[n+5];
    map<int,int> pos;
    for(int i = 1;i<=n;i++){
        resL[i] = i;
        resH[i] = i;
        number[i] = i;
        pos[i] = i;
    }
    for(int i = 0;i<m;i++){
        cin>>ara[i];
    }

    for(int i = 0;i<m;i++){
        int curN = ara[i];
        if(number[curN] != 1){
            number[curN]--;// index komaisi
            int age = pos[number[curN]];
            number[age] ++;
            pos[number[age]] = age;
            pos[number[curN]] = curN;// position e number assign
            resH[curN] = min(resH[curN],number[curN]);
            resL[age] = max(resL[age],number[age]);
        }
    }
    for(int i = 1;i<=n;i++)cout<<resH[i]<< " " <<resL[i]<<endl;

}
