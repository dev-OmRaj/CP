class Solution {
public:
    int maxLoot(int idx, vector<int>& nums, vector<int>& dp){
        if(idx == 0) return nums[idx];
        if(idx < 0) return 0;
        if(dp[idx] != -1) return dp[idx];

        int pick = nums[idx] + maxLoot(idx-2, nums, dp);
        int not_pick = 0 + maxLoot(idx-1, nums, dp);

        dp[idx] = max(pick, not_pick);
        return dp[idx]; 
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(), -1);
        return maxLoot(nums.size()-1, nums, dp);
    }
};