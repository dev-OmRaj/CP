class Solution {
public:
    bool check_first_row(vector<vector<int>>& m, int t){
        for(int i = 0 ; i < t ; i++){
            if(m[0][i] == 0) return true;
        }
        return false;
    }

    bool check_first_col(vector<vector<int>>& m, int t){
        for(int i = 0 ; i < t ; i++){
            if(m[i][0] == 0) return true;
        }
        return false;
    }

    void set_col_zero(int t, vector<vector<int>>& m, int idx){
        for(int i = 0 ; i < t ; i++){
            m[i][idx] = 0;
        }
    }

    void set_row_zero(int t, vector<vector<int>>& m, int idx){
        for(int i = 0 ; i < t ; i++){
            m[idx][i] = 0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        bool frow = check_first_row(matrix, m);
        bool fcol = check_first_col(matrix, n);

        for(int i = 1 ; i < n ; i++){
            for(int j = 1 ; j < m ; j++){
                if(matrix[i][j] == 0){
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }

        // for columns
        for(int i = 1 ; i < m ; i++ ){
            if(matrix[0][i] == 0){
                set_col_zero(n, matrix, i);
            }
        }

        // For rows
        for(int i = 1 ; i < n ; i++){
            if(matrix[i][0] == 0){
                set_row_zero(m, matrix, i);
            }
        }

        if(frow){
            set_row_zero(m,matrix,0);
        }

        if(fcol){
            set_col_zero(n,matrix,0);
        }
    }
};