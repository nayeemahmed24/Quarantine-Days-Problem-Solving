#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int teamA = 0,teamB = 0;
        int teamAScore = 0,teamBScore = 0;
        for(int i = 0;i<s.length();i++){
            if(i % 2 == 0){
                teamA++;
                if(s[i] == '1')teamAScore++;


            }
            else{
                teamB++;
                if(s[i] == '1')teamBScore++;
            }

            if(n - teamB < teamAScore - teamBScore || teamBScore - teamAScore > n -teamA){
                    //cout<<teamB<< " teamBSCOE : "<<teamBScore << " \\ "<<teamA<<" // "<<teamAScore<<endl;
                    cout<<i+1<<endl;
                    break;
            }
            if(i == n*2 -1)cout<<n*2<<endl;
        }
    }
}
