class Solution {
public:
    bool isalphanumeric(char t){
        if( (t >= 'a' && t <= 'z') || (t >= '0' && t <= '9') || (t >= 'A' && t <= 'Z') ) return true;
        return false;
    }
    char cap(char t){
        if(t >= 'A' && t <= 'Z'){
            return t - 'A' + 'a';
        }
        return t;
    }
    bool isPalindrome(string s) {
        int f = 0, e = s.size()-1;
        while(f < e){
            while(f < e && !isalphanumeric(s[f])){
                f++;
            }
            while(f < e && !isalphanumeric(s[e])){
                e--;
            }
            if(cap(s[f]) != cap(s[e])) return false;
            f++;e--;
        }
        return true;
    }
};