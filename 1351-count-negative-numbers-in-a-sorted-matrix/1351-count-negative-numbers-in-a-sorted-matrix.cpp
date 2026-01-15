class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        // Brute Force Approach O(n^2)
        // int cnt = 0;
        // for (int i =0; i < grid.size(); i++) {
        //     for (int j = 0; j < grid[0].size(); j++) {
        //         if (grid[i][j] <0) {
        //             cnt ++;
        //         }
        //     }
        // }
        // return cnt;

        // Optimization 
        int j = 0, k = 0;
        int cnt = 0;
        for (int i = 0; i < grid.size()*grid[0].size(); i++) {
            j = i / grid[0].size();
            k = i % grid[0].size();
            if (grid[j][k] < 0) {
                cnt ++;
            }
        }
        return cnt;
    }
};