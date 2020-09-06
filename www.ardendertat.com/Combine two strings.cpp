#include<bits/stdc++.h>
using namespace std;
string str1,str2,str3;
//dacbfe - abc - def
bool rec(int pos,int str1Pos,int str2Pos){
    if(pos>=str3.length())return true;
    bool res1 = false,res2 = false;
    if(str1[str1Pos] == str3[pos]){
        res1 = rec(pos+1,str1Pos+1,str2Pos);
    }
    if(str2[str2Pos] == str3[pos]){
        res2 = rec(pos+1,str1Pos,str2Pos+1);
    }
    return res1|res2;

}
int main(){
    cin>>str1>>str2>>str3;
    if(str1.length() + str2.length() != str3.length())cout<<"Not Combined"<<endl;
    bool res = rec(0,0,0);
    if(res)cout<<"Combined"<<endl;
    else
        cout<<"Not Combined"<<endl;
}
