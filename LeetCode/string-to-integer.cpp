class Solution {
public:
    int myAtoi(string str) {
        vector<int> ans;
        bool negetive = false;
        bool resExist = false;
        for(int i = 0;i<str.length();i++){
            if(str[i] == ' ' ){
                if(resExist)break;
            }
            else if(str[i] == '+'){
                if(resExist)break;
                resExist = true;
            }
            else if(str[i] == '-'){
                if(resExist)break;
                resExist = true;
                negetive = true;
            }
            else if(str[i] >= '0' && str[i]<='9'){
                resExist = true;
                ans.push_back(str[i] - '0');
            }
            else{
                if(resExist == false)return 0;
                if(resExist == true)break;
            }
        }
        long long res = 0;
        int powFact = 0;
        for(int i = ans.size()-1;i>=0;i--){
            if(powFact>10 && ans[i] != 0){
                if(!negetive)return INT_MAX;
                if(negetive)return INT_MIN;        
            }
            res += ans[i] * pow(10,powFact);
            powFact++;
            
            if(res >INT_MAX && !negetive)return INT_MAX;
            if(res-1 > INT_MAX && negetive)return INT_MIN;
        }
        if(negetive)res *= -1;
        return res;
        
    }
};