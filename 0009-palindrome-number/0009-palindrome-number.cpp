class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        if(x == 0) return true;
        int digits = log10(x)+1;
        if(digits == 1) return true;
        int nx = 0;
        int temp = digits/2;
        while(temp != 0){
            nx = nx*10 + x%10;
            x /= 10;
            temp--;
        }
        if((digits & 1) == 1){
            nx = nx*10 + x%10;
        }
        return (x == nx);

    }
};