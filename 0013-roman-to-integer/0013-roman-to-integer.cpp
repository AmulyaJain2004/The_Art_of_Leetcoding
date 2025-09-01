class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        unordered_map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        ans += mp[s[s.size()-1]];
        for (int i = s.size()-2 ; i >= 0; i --) {
            if (mp[s[i]] >= mp[s[i+1]]) {
                ans += mp[s[i]];
            }
            else {
                ans -= mp[s[i]];
            }
        }
        return ans;

        // To optimize it further although not needed, we can use if else in one function
        // to achieve what we have done using map
    }
};