class Solution {
public:
    // int solve(int n, vector<int> &dp) {
    //     if (n <= 1) {
    //         return n;
    //     }
    //     if (dp[n] != -1) {
    //         return dp[n];
    //     }
    //     return dp[n] = solve(n-1, dp) + solve(n-2, dp);
    // }
    int fib(int n) {
        if (n <= 1) { // lowest possible value
            return n;
        }
        // vector <int> dp(n+1, -1); // dp[i] will represent ith fibonacci number
        // return solve(n, dp);

        // bottom up
        int a = 0;
        int b = 1;
        int c;
        for (int i = 1; i < n; i++) {
            c = a + b;
            a = b; 
            b = c;
        }
        return c;
    }
};