class Solution {
public:
    void solve(vector<vector<int>>& ans, vector<int>temp, int n, unordered_set<int>st, vector<int>& nums){
        if(temp.size() == n) {
            ans.push_back(temp);
            return;
        }

        for(int i = 0 ; i < n ; i++){
            if(st.find(nums[i]) == st.end()){
                temp.push_back(nums[i]);
                st.insert(nums[i]);
                solve(ans, temp, n , st, nums);
                temp.pop_back();
                st.erase(nums[i]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        int len = nums.size();
        unordered_set<int>st;
        solve(ans, temp, len, st , nums);
        return ans;
    }
};