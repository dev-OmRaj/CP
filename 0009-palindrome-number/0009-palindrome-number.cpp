class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int nx = 0;
        int temp = x;
        while(temp != 0){
            int digit = temp%10;
            if(nx <= (INT_MAX-digit)/10){
                nx = nx*10 + digit;
            }
            temp /= 10;
        }
        return(x == nx);
    }
};