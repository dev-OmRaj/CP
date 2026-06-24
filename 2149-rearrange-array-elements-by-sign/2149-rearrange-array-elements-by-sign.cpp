class Solution {
public:
    vector<int> brute_with_space(vector<int>& nums){
        // Store +ve no. in pos array, similarly store negative no. in neg array.
        // then move no. according to the question.
        vector<int>pos, neg;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] >= 0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }

        for(int i = 0 ; i < nums.size()/2 ; i++){
            nums[2*i] = pos[i];
            nums[(2*i) + 1] = neg[i];
        }

        return nums;
    }

    vector<int> rearrangeArray(vector<int>& nums) {
        return brute_with_space(nums);
    }
};