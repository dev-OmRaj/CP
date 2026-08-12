class Solution {
public:
    int climbStairs(int n) {
        int prev = 2;
        int back = 1;
        if(n == 1) return back;
        if(n == 2) return prev;
        int curr;
        for(int i = 3 ; i <= n ; i++){
            curr = prev + back;
            back = prev;
            prev = curr;
        }
        return curr;
    }
};