#include<bits/stdc++.h>
using namespace std;
int main(){
    string ara[7] = {"saturday", "sunday", "monday", "tuesday", "wednesday", "thursday" ,"friday"};
    map<string,int>mm;
    for(int i = 0;i<7;i++)mm[ara[i]] = i+1;
    int test;
    cin>>test;
    while(test--){
        string start,stop;
        int l,r;
        cin>>start>>stop>>l>>r;

        int dif = mm[stop] - mm[start] + 1;
        if(dif<=0){
            dif = dif + 7;

        }
        while(dif<l)
		 dif=dif+7;
        if(dif<l || dif>r){
            cout<<"impossible"<<endl;
        }
        else if(dif>= l && dif+7>r){
            cout<<dif<<endl;
        }
        else{
            cout<<"many"<<endl;
        }

    }
}
