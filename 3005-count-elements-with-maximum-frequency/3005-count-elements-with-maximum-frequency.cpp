class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int countTotalFreq = 0;
        unordered_map<int, int>freqMap;
        for (int i = 0; i < nums.size(); i++) {
            freqMap[nums[i]] ++;
        }
        int maxm = INT_MIN;
        for (auto it : freqMap) {
            maxm = max(it.second, maxm);
        }
        for (auto it : freqMap) {
            if (it.second == maxm) {
                countTotalFreq += it.second;
            }
        }
        return countTotalFreq;
    }
};