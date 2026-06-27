class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i = 0, j = 1;
        while(i < arr.size()){
            if(j != arr[i]) {
                j++;
                k--;
            }
            else{
                i++;
                j++;
            }
            if(k == 0) return --j;
        }
        while(k != 0){
            j++;
            k--;
        } 
        return --j;

    }
};