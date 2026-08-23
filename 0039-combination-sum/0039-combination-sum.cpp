class Solution {
public:
    void solve(vector<int>& candidates, int start, int remaining, vector<int>& curr, vector<vector<int>>& res) {
        if (remaining == 0) {
            res.push_back(curr);
            return;
        }
        if (remaining < 0) {
            return;
        }
        for (int i = start; i < candidates.size(); i ++) {
            curr.push_back(candidates[i]);
            solve(candidates, i, remaining - candidates[i], curr, res);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> curr;
        int start = 0;
        int remaining = target;
        solve(candidates, start, target, curr, res);
        return res;
    }
};