class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // Declare Ans array
        vector<int>ans;
        // Traversing the subarray 
        for(int i = 0 ; i < nums1.size() ; i++){
            // find the current element in the main array
            auto it = find(nums2.begin(), nums2.end(), nums1[i]);
            // Converting the iterator into index
            int idx = it - nums2.begin();
            bool found = false;
            for(int j = idx + 1; j < nums2.size() ; j++){
                // Searching the next greater element
                if(nums2[j] > nums1[i]) {
                    found = true;
                    ans.push_back(nums2[j]);
                    break;
                }
            }
            // If greater element not found then push -1.
            if(!found) ans.push_back(-1);
                
        }
        return ans;
    }
};