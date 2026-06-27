class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min_size = 200;
        string min_word = "";
        for(int i = 0 ; i < strs.size() ; i++){
            if(strs[i].size() < min_size){
                min_size = strs[i].size();
                min_word = strs[i];
            }
        }
        char temp;
        string word = "", prefix = "";
        for(int i = 0 ; i < min_word.size() ; i++){
            temp = min_word[i];
            for(int j = 0 ; j < strs.size() ; j++){
                word = strs[j];
                if(word[i] != temp){
                    return prefix;
                }
            }
            prefix.push_back(temp);
        }
        return prefix;
    }
};