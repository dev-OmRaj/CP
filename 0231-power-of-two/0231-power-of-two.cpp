class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;
        int l = n, count = 0, temp;
        while(l > 0){
            temp = l % 2;
            if(temp == 1) count++;
            if(count > 1) return false;
            l = l / 2;
        }
        return true;
    }
};