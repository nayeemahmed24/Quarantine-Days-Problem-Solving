class Solution {
public:
    int reverse(long long  x) {
        if(x > pow(2,31) || x< pow(-2,31))return 0;
        vector<int>ans;
        bool negetive = false;
        if(x <0){
            negetive = true;
            x *= -1;
        }
        while(x != 0){
            int temp = x % 10;
            x = x/10;
            ans.push_back(temp);
        }
        long long  res = 0; 
        for(int i = 0;i<ans.size();i++){
            res += ans[i] * pow(10,ans.size() -i - 1 );
            if(res > 2147483647 && negetive == false)return 0;
            if(res > 2147483648 && negetive )return 0;
            
        }
        if(negetive)res *= -1;
        return res;
    }
};