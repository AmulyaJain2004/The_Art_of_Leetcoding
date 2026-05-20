class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        // first solution
        // vector <int> ans;
        // unordered_map <int, int> mp;
        // for (int i = 0; i < n; i++) {
        //     mp[A[i]]++;
        //     mp[B[i]]++;
        //     int cnt = 0;
        //     for (auto it: mp) {
        //         if (it.second == 2) {
        //             cnt ++;
        //         }
        //     }
        //     ans.push_back(cnt);
        // }
        // return ans;
        
        // optimized solution
        // what we will do?
        // we have to do store frequency of element in array instead of maintaining a map
        // since every element is distinct, we can store frequency of element at index = element only
        vector <int> ans(n);
        vector <int> frequency(n+1, 0);
        int common = 0;
        for (int i = 0; i < n; i++) {
            frequency[A[i]] ++;
            if (frequency[A[i]] == 2) {
                common ++;
            }
            frequency[B[i]] ++;
            if (frequency[B[i]] == 2) {
                common ++;
            }
            ans[i] = common;
        }
        return ans;
    }
};