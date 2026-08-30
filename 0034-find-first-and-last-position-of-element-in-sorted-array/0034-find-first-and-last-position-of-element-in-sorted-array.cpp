class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2,-1);
        int n = nums.size();
        int s = 0, e = n-1, m = 0;
        // First Occurence
        while(s <= e){
            m = s + (e-s)/2;
            if(nums[m] == target){
                ans[0] = m;
                e = m-1;
            }
            else if(nums[m] > target){
                e = m-1;
            }
            else s = m+1;
        }
        // Last Occurence
        s = 0, e = n-1;
        while(s <= e){
            m = s + (e-s)/2;
            if(nums[m] == target){
                ans[1] = m;
                s = m+1;
            }
            else if(nums[m] > target){
                e = m-1;
            }
            else s = m+1;
        }
        return ans;
    }
};