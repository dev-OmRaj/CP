class Solution {
public:
    int method2(vector<int>& nums){
        // Method 2, TC: O(n^2), SC: O(1)
        int sum = nums[0], running_sum;
        for(int s = 0 ; s < nums.size() ; s++){
            running_sum = 0;
            for(int t = s ; t < nums.size() ; t++){
                running_sum += nums[t];
                if(running_sum > sum) 
                    sum = running_sum;
            }
        }
        return max(running_sum, sum);
    }
    int maxSubArray(vector<int>& nums) {
        // return method2(nums);
        // method 3: Optimized Solution, Kadane Algo, TC: O(n), SC: O(1)
        int sum = INT_MIN, running_sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            running_sum += nums[i];
            if(running_sum > sum)
                sum = running_sum;
            if(running_sum < 0)
                running_sum = 0;
        }
        return sum;
    }
};