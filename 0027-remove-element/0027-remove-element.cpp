class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int s = 0, l = nums.size()-1;
        while(s <= l){
            if(nums[s] == val){
                swap(nums[s], nums[l]);
                l--;
                continue;
            }
            s++;
        }
        return s;
    }
};