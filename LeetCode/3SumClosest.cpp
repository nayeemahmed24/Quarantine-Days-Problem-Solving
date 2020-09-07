class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int nearestSum,ans;
        nearestSum = abs(target - (nums[0] + nums[1] + nums[2]));
        for(int i = 0;i<nums.size()-2;i++){
            int first = nums[i];
            int j = i+1;
            int k = nums.size() - 1;
            
            while(j<k){
                int sum = first + nums[j] + nums[k]; 
                if(nearestSum >= abs(target-sum)){
                    nearestSum = abs(target-sum);
                    ans = sum;
                }
                if(sum == target){
                    j++;
                    k--;
                    break;
                }
                else if(sum<target){
                    j++;
                }
                else if(sum>target){
                    k--;
                }
            }
        }
        return ans;
    }
};