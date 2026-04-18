class Solution {
public:
    bool isHappy(int n) {
        int x = n;
        unordered_map<int, int> mp;
        mp[x]++;
        while (x != 1) {
            int num = x;
            int ss = 0;
            while (num != 0) {
                int digit = num % 10;
                num = num / 10;
                ss += (int)pow((double)digit, 2);
            }
            x = ss;
            if (mp.find(x) != mp.end()) {
                return false;
            }
            mp[x]++;
        }
        return true;
    }
};