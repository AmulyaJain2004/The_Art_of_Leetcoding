class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector <int> res(code.size(), 0);
        if (k == 0) {
            return res;
        }
        int sum = 0;
        if (k > 0) {
            for (int i = 1; i <= k; i++) {
                sum += code[i % code.size()];
            }
            for (int i = 0; i < code.size(); i++) {
                res[i] = sum;
                sum -= code[(i + 1) % code.size()];
                sum += code[(i + k + 1) % code.size()];
            }
        }
        else {
            k = -k;
            for (int i = 1; i <= k; i++) {
                sum += code[(code.size()-i) % code.size()];
            }
            for (int i = 0; i < code.size(); i++) {
                res[i] = sum;
                sum -= code[(code.size() + i - k) % code.size()];
                sum += code[i];
            }
        }
        return res;

        // much better code below
        // int n = code.size();
        // vector<int> res(n, 0);
        // if (k == 0) return res;

        // int start, end;
        
        // // define window range
        // if (k > 0) {
        //     start = 1;
        //     end = k;
        // } else {
        //     start = n + k;
        //     end = n - 1;
        // }

        // // initial window sum
        // int sum = 0;
        // for (int i = start; i <= end; i++) {
        //     sum += code[i % n];
        // }

        // // sliding window
        // for (int i = 0; i < n; i++) {
        //     res[i] = sum;

        //     // remove outgoing
        //     sum -= code[start % n];

        //     // move window
        //     start++;
        //     end++;

        //     // add incoming
        //     sum += code[end % n];
        // }

        // return res;
    }
};