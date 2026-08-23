class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c =matrix[0].size();

        for(int i = 0 ; i < r ; i++){
            for(int j = i + 1; j < c ; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        int j = 0, k = c-1;
        while(j < k){
            for(int i = 0 ; i < r ; i++){
                swap(matrix[i][j], matrix[i][k]);
            }
            j++;
            k--;
        }
    }
};