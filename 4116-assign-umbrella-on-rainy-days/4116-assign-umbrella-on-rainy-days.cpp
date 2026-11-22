class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int n = rain.size();
        int cnta = 0;
        int cntb = 0;
        vector<string>ans;
        for (int i = 0; i < n; i++) {
            if (rain[i] == 1 && i +1 < n && rain[i+1] == 1) {
                // both need
                if (cnta <= cntb ) {
                    ans.push_back("Alice");
                    cnta ++;
                }
                else {
                    ans.push_back("Bob");
                    cntb ++;
                }
            }
            else if ((rain[i] == 1 && i + 1 < n && rain[i+1] != 1) || (rain[i] == 1 && i + 1 >= n)) {
                ans.push_back("Bob");
                cntb ++;
            }
            else {
                ans.push_back("None");
            }
        }
        return ans;
    }
};