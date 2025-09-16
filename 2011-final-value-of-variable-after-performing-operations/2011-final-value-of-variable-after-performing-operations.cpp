class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        for (int i = 0; i < operations.size(); i++) {
            if(operations[i][0] == 'X') {
                if (operations[i][1] == '+') {
                    ans++;
                }
                else {
                    ans--;
                }
            }
            else if (operations[i][0] == '+') {
                ++ans;
            }
            else {
                --ans;
            }
        }
        return ans;
    }
};