class Solution {
public:
    int minOperations(string s) {
        int minOps = 0;
        int Ops_case1 = 0; //10101010.....
        int Ops_case2 = 0; //01010101.....
        for (int i = 0; i < s.size(); i++) {
            if (i % 2 == 0) {
                Ops_case1 += 1 ^ (s[i] - '0');
                Ops_case2 += 0 ^ (s[i] - '0');
            }
            else {
                Ops_case1 += 0 ^ (s[i] - '0');
                Ops_case2 += 1 ^ (s[i] - '0');
            }
        }
        minOps = min(Ops_case1, Ops_case2);
        return minOps;
    }
};