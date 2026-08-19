class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        int cons = nums[0];
        int ans = 1, count = 1;
        for(int i = 1 ; i < nums.size() ; i++){
            if(cons+1 == nums[i]){
                count++;
            }
            ans = max(count, ans);
            if(cons+1 != nums[i]){
                if(cons != nums[i]){
                    count = 1;
                }
            }
            cons = nums[i];
        }
        return ans;
    }
};