class Solution {
public:
    int minCost(string s, vector<int>& cost) {
        int mx  = cost[0];
        int ans = 0;
        for(int i = 1 ;i<s.length();i++){
            if(s[i] == s[i-1]){
                ans += min(cost[i] ,mx);
                mx = max(cost[i],mx);
            }
            else{
                mx = cost[i];
            }
        }
        return ans;
    }
};