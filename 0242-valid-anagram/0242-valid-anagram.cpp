class Solution {
public:
    // method1(){
    //     if(s.size() != t.size()) return false;
    //    vector<int>alpha(26,0);
    //    for(int i = 0; i < s.size(); i++){
    //     alpha[s[i] - 'a']++;
    //     alpha[t[i] - 'a']--;
    //    }
    //    for(int i = 0 ; i < 26 ; i++) if(alpha[i] != 0) return false;
    //    return true;
    // }
    bool isAnagram(string s, string t) {
       unordered_map<char,int>mp;
       if(s.size() != t.size()) return false;
       for(int i = 0 ; i < s.size() ; i++){
        mp[s[i]]++;
        mp[t[i]]--;
       }
       for(auto it: mp){
        if(it.second != 0) return false;
       }
       return true;
    }
};