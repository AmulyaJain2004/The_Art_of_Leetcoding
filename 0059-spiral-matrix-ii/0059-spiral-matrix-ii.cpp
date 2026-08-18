class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> arr(n, vector<int>(n, 0));
        int top = 0;
        int bottom = n-1;
        int left = 0;
        int right = n-1;
        int num = 1;
        while (left <= right && top <= bottom) {
            for (int j = left; j <= right; j ++) {
                arr[top][j] = num;
                num ++;
            }
            top ++;
            for (int i = top; i <= bottom; i ++) {
                arr[i][right] = num;
                num ++;
            }
            right --;
            for (int j = right; j >= left; j --) {
                arr[bottom][j] = num;
                num ++;
            }
            bottom --;
            for (int i = bottom; i >= top; i --) {
                arr[i][left] = num;
                num ++;
            }
            left ++;
        }
        return arr;
    }
};