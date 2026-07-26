class Solution {
public:
    int hammingWeight(int n) {
        int t = n, ans = 0;
        while(t != 0){
            t = t & (t-1);
            ans++;
        }
        return ans;
    }
};