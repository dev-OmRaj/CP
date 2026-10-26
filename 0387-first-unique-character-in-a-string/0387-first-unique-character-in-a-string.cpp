class Solution {
public:
    int firstUniqChar(string s) {
        int ans = s.size();
        unordered_map<char, pair<int,int>>mp; // element:index:count
        for(int i = 0 ; i < s.size() ; i++){
            mp[s[i]].first = i;
            mp[s[i]].second++;
        }
        
        for(auto it: mp){
            if(it.second.second == 1){
                ans = min(ans, it.second.first);
            }
        }
        if(ans == s.size()) return -1;
        return ans;

    }
};