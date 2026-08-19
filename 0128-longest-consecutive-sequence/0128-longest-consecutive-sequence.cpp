class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        int count = 0, ans = 0;
        int temp ;
        for(int i = 0 ; i < nums.size() ; i++){
            st.insert(nums[i]);
        }
        for(auto it: st){
            temp = it;
            if(st.find(temp-1) == st.end() ){
                count = 1;
                while(true){
                    if(st.find(++temp) == st.end()){
                        break;
                    }
                    count++;
                }
            }
            ans = max(ans, count);
        }
        return ans;
    }
};