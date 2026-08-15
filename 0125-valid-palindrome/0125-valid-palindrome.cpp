class Solution {
public:
    bool isPalindrome(string s) {
        string news = "";
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                news.push_back(s[i]-'A'+ 'a');
            }
            else if(s[i] >= 'a' && s[i] <= 'z') news.push_back(s[i]);
            else if(s[i] >= '0' && s[i] <= '9') news.push_back(s[i]);
        }
        // cout<<news<<" "<<s<<endl;
        int i = 0, j = news.size()-1;
        while(i < j){
            if(news[i] != news[j]) return false;
            i++; j--;
        }
        return true;
    }
};