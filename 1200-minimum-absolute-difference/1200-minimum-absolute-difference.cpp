class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        int minDiff {INT_MAX};        
        for (int i = 0; i < arr.size() - 1; i++) {
            if (arr[i+1] - arr[i] < minDiff) {
                if (!ans.empty()) {
                    int size = ans.size();
                    for (int j = 0; j < size; j++) {
                        ans.erase(ans.begin());
                    }
                }
                ans.push_back({arr[i], arr[i+1]});
                minDiff = arr[i+1] - arr[i];
            }
            else if (arr[i+1] - arr[i] == minDiff) {
                ans.push_back({arr[i], arr[i+1]});
            }
            else {
                continue;
            }
        }
        return ans;
    }
};