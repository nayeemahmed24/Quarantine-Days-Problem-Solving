#include<bits/stdc++.h>
using namespace std;
int LongestSubstring(string s){
    map<char,int> charTrack;
    for(int i = 0;i<26;i++){
        charTrack[i] = 0;
    }
    int l,r;
    l = 0;r = 0;
    int ans = 0;
    while(1){
        if(r>= s.length())break;
        if(charTrack[s[r] ] == 0){
            charTrack[s[r] ] = 1;
            r++;
            ans = max(ans,r - l);
        }
        else{
            charTrack[s[l] ] = 0;
            l++;
        }
    }
    return ans;

}
int main(){
    string s;
    cin>>s;
    cout<<LongestSubstring(s)<<endl;
}
