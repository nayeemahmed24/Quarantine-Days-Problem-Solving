class Solution {
public:
    string convert(string s, int numRows) {
        vector<char> rows[numRows];
        int now = 0;
        bool updir = false;
        if(numRows == 1){
            return s;
        }
        for(int i = 0;i<s.length();i++){
            rows[now].push_back(s[i]);
            if(!updir){
                if(now == numRows - 1){
                    now--;
                    updir = true;
                }
                else{
                    now++;
                }
            }
            else{
                if(now == 0){
                    now++;
                    updir = false;
                }
                else{
                    now--;
                }
            }
        }
        string ans = "";
        for(int i = 0;i<numRows;i++){
            for(int j = 0;j<rows[i].size();j++){
                
                string temp(1,rows[i][j]);
                ans += temp;
            }
        }
        return ans;
    }
};