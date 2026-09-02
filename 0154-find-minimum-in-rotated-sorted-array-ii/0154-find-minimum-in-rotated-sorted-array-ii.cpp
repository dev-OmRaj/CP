class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, h = nums.size()-1, m = 0;
        int ans = INT_MAX;
        while(l <= h){
            m = l + (h-l)/2;
            if(nums[m] < ans) ans = nums[m];
            if(nums[l] == nums[m] && nums[h] == nums[m]){
                l++;
                h--;
                continue;
            }
            if(nums[l] <= nums[m]){
                ans = min(ans, nums[l]);
                l = m+1;
            }
            else{
                ans = min(ans, nums[m]);
                h = m-1;
            }
        }
        return ans;
    }
};