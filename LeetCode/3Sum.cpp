class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> > as;
        if(nums.size()<3)return as;
        sort(nums.begin(),nums.end());
        set<vector<int> > ans;
        vector<vector<int> > res;
        if(nums[0]==0 && nums[nums.size()-1]==0)
        {
            vector<int> x(3,0);
            res.push_back(x);
            return res;
        }
        for(int i = 0;i<nums.size()-2;i++){
            int a = nums[i];
            int j = i+1;
            int k = nums.size() - 1;
            while(j<k){
                int sum = a + nums[j]+nums[k];
                vector<int> temp;
                if(sum == 0){
                    temp.push_back(a);
                    temp.push_back(nums[j++]);
                    temp.push_back(nums[k--]);
                    ans.insert(temp);
                }
                else if(sum>0)k--;
                else if(sum<0)j++;
            }
        }
        
        for(auto as = ans.begin();as!=ans.end();as++){
            res.push_back(*as);
        }
        return res;
    }
};