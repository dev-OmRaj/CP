class Solution {
public:
    vector<int>findLPS(string s, vector<int>& lps){
        if(s.size() == 1) return {0};
        lps[0] = 0;
        int i = 1, len = 0;
        while(i < s.size()){
            if(s[i] == s[len]){
                len++;
                lps[i] = len;
                i++;
            }
            else{
                if(len > 0){
                    len = lps[len-1];
                }
                else{
                    lps[i] = len;
                    i++;
                }
            }
        }
        return lps;
    }
    int strStr(string haystack, string needle) {
        if(needle.size() == 0) return -1;
        vector<int>lps(needle.size());
        findLPS(needle, lps);
        int i = 0, j = 0;
        while(i < haystack.size()){
            if(haystack[i] == needle[j]){
                i++;j++;
                if(j == needle.size()) return i - j;
            }
            else if(j > 0){
                j = lps[j-1];
            }
            else i++;
        }
        return -1;
    }
};