class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(), 0);
        int prev = nums[0];
        int prev2 = 0;
        for(int i = 1; i < nums.size() ; i++){
            int take = nums[i] + prev2;
            // if(i > 1) take += dp[i-2];
            // int not_take = 0 + dp[i-1];
            int not_take = 0 + prev;
            // dp[i] = max(take, not_take);

            int curr = max(take, not_take);
            prev2 = prev;
            prev = curr;
        }
        // return dp[nums.size()-1];
        return prev;
    }
};