class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0, sum;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            sum = 0;
            for(int j = i ; j < n ; j++){
                sum += nums[j];
                if(sum == k) ans++;
            }
        }
        return ans;
    }
};