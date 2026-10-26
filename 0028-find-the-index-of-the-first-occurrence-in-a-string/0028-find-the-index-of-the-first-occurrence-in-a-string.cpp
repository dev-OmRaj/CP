class Solution {
public:
    int strStr(string haystack, string needle) {
        int haySize = haystack.size();
        int n = needle.size();
        bool found = true;
        for(int i = 0; i <= haySize - n ; i++){
            if(haystack[i] == needle[0]){
                found = true;
                for(int j = 0; j < n ; j++){
                    if(needle[j] != haystack[i+j]){
                        found = false;
                        break;
                    }
                }
                if(found) return i;
            }
        }
        return -1;
    }
};