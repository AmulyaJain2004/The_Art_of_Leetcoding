class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> mp; 
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]] ++;
        }
        int maxfreq_vowel = 0;
        int maxfreq_consonant = 0;
        for (auto it: mp) {
            if (it.first == 'a' || it.first == 'e' || it.first == 'i' || it.first == 'o' || it.first == 'u') {
                if (it.second > maxfreq_vowel) {
                    maxfreq_vowel = it.second;
                }
            }
            else {
                if (it.second > maxfreq_consonant) {
                    maxfreq_consonant = it.second;
                }
            }
        }
        return maxfreq_consonant + maxfreq_vowel;
    }
};