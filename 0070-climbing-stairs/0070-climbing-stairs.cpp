class Solution {
public:
    int climb(int n, vector<int>& nums){
        if(n <= 2){
            nums[n] = n;
            return n;
        }
        if(nums[n] != -1) return nums[n];
        nums[n] = climb(n-1, nums) + climb(n-2, nums);
        return nums[n];
    }
    int climbStairs(int n) {
        if(n == 1) return 1;
        if(n == 2) return 2;
        vector<int>arr(n+1, -1);
        // return climb(n, arr);
        arr[1] = 1;
        arr[2] = 2;
        for(int i = 3 ; i <= n ; i++){
            arr[i] = arr[i-1] + arr[i-2];
        }
        return arr[n];
        
    }
};