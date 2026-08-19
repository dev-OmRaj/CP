class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN, running_sum = 0;
        for(int i = 0 ; i < size(nums) ; i++){
            running_sum += nums[i];
            ans = max(running_sum, ans);
            if(running_sum < 0) running_sum = 0;
        }
        return ans;
    }
};