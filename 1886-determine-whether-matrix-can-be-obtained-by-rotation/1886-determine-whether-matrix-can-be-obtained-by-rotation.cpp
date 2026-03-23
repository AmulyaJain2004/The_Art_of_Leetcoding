class Solution {
public:
    void rotateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();

        // Step 1: Transpose
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }

        // Step 2: Reverse each row
        for(int i = 0; i < n; i++) {
            reverse(mat[i].begin(), mat[i].end());
        }
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for (int i = 0; i < 4; i++) {
            if (mat == target) {
                return true;
            }
            rotateMatrix(mat);
        }
        return false;
    }
};