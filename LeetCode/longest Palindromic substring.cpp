#include<bits/stdc++.h>
using namespace std;
int expand(string s,int left,int right)
{
    if(s == "" || left>right)
        return 0;

    while(  left >= 0 && right<s.length() && s[left] == s[right])
    {
        left--;
        right++;
    }
    return right - left -1;

}
string longestPalindrome(string s)
{
    if(s == "" || s.length() == 0)
        return "";
    int start = 0;
    int end_ = 0;
    for(int i = 0; i<s.length(); i++)
    {
        int len1 = expand(s,i,i);
        int len2 = expand(s,i,i+1);
        int ans = max(len1,len2);
        if(end_ - start < ans )
        {
            start = i - ((ans-1)/2);
            end_ = i + (ans/2);
        }
    }
    return s.substr(start,end_ - start + 1);
}


int main()
{
    string s;
    cin>>s;
    cout<<longestPalindrome(s)<<endl;
}
