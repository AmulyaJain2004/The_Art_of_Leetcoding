class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int cnt = 0;
        for (int row = 0; row < mat.size(); row ++) {
            for (int col = 0; col < mat[0].size(); col ++) {
                if (mat[row][col] == 1) {
                    // find colth colSum
                    int colSum = 0;
                    for (int i = 0; i < mat.size(); i++) {
                        colSum += mat[i][col];
                    }
                    // find rowth rowSum
                    int rowSum = 0;
                    for (int j = col; j < mat[0].size(); j++) {
                        rowSum += mat[row][j];
                    }
                    if (rowSum == 1 && colSum == 1) {
                        cnt ++;
                    }
                }
            }
        }
        return cnt;
    }
};