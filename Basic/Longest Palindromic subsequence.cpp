#include<bits/stdc++.h>
using namespace std;
int length,maxLength = -1;
string mainString,plaindrome;
int CheckPalindrome(string s){
   string _revString = s;
   reverse(_revString.begin(),_revString.end());
   if(s == _revString)return s.size();
   return 0;
}
string LongestPanlindromSubsequence(int index,string s){
    if(index >= length){
        int _lengthPalindrome = CheckPalindrome(s);
        if(maxLength<_lengthPalindrome){
                maxLength = _lengthPalindrome;
                plaindrome = s;

        }
        return s;

    }
    LongestPanlindromSubsequence(index+1,s);
    string ss ;
    ss.push_back(mainString[index]);

    LongestPanlindromSubsequence(index+1,s+ss);

}
int main(){
    cin>>mainString;
    length = mainString.size();
    string ss = LongestPanlindromSubsequence(0,"");
    cout<<plaindrome<<endl;
}
