class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int l = nums.size();
        vector<int>a(l, 0);
        int pos = 0, neg = 1;
        for(int i = 0 ; i < l ; i++){
            if(nums[i] >= 0){
                a[pos] = nums[i];
                pos += 2;
            }
            else{
                a[neg] = nums[i];
                neg += 2;
            }
        }
        return a;
    }
};
// if(pos + 2 < l) 
// if(neg + 2 < l) 