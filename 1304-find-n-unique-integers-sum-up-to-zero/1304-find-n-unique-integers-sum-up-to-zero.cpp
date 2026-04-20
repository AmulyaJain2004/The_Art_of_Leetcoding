class Solution {
public:
    vector<int> sumZero(int n) {
        vector <int> ans;
        if (n%2 == 0) {
            for (int i = 1-n; i <= n-1; i+=2) {
                ans.push_back(i);
            }
        }
        else {
            for (int i = -(n/2); i <= n/2; i++) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};