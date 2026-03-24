class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        // int product = 1;
        // for(int i = 0; i < grid.size(); i++) {
        //     for (int j = 0; j < grid[0].size(); j++) {
        //         product *= grid[i][j];
        //     }
        // }
        // for(int i = 0; i < grid.size(); i++) {
        //     for (int j = 0; j < grid[0].size(); j++) {
        //         grid[i][j] = (product / grid[i][j])% 12345;
        //     }
        // }
        // return grid;

        int n = grid.size();
        int m = grid[0].size();
        int mod = 12345;

        int size = n * m;
        vector<int> flat(size);

        // Flatten
        int k = 0;
        for (auto &row : grid) {
            for (auto &val : row) {
                flat[k++] = val % mod;
            }
        }

        vector<int> prefix(size, 1), suffix(size, 1);

        // Prefix
        for (int i = 1; i < size; i++) {
            prefix[i] = (prefix[i-1] * flat[i-1]) % mod;
        }

        // Suffix
        for (int i = size - 2; i >= 0; i--) {
            suffix[i] = (suffix[i+1] * flat[i+1]) % mod;
        }

        // Result
        vector<vector<int>> result(n, vector<int>(m));
        k = 0;

        for (int i = 0; i < size; i++) {
            int val = (prefix[i] * suffix[i]) % mod;
            result[i / m][i % m] = val;
        }
        return result;
    }
};