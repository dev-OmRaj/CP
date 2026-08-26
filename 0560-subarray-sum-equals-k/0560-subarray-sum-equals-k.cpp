class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp; // sum: count
        int ans = 0, prefixSum = 0;
        mp[0] = 1;
        for(int i = 0; i < nums.size() ; i++){
            prefixSum += nums[i];
            int complement = prefixSum - k;
            if(mp.find(complement) != mp.end()){
                ans += mp[complement];
            }
            mp[prefixSum]++;
        }
        return ans;
    }
};