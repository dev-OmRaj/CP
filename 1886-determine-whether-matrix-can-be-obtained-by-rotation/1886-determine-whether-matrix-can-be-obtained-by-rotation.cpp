class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int rot = 3;
        int r = mat.size();
        int c = mat[0].size();
        while(rot-- >= 0){
            if(mat == target) return true;
            // Transpose
            for(int i = 0 ; i < r ; i++){
                for(int j = i ; j < c ; j++){
                    swap(mat[i][j], mat[j][i]);
                }
            }
            // Reverse Column wise
            int j = 0, k = c-1;
            while(j < k){
                for(int i = 0 ; i < r ; i++){
                    swap(mat[i][j], mat[i][k]);
                }
                j++;k--;
            }
        }
        return false;
    }
};