class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int dist = INT_MAX;
        for (int i = 0; i < words.size(); i++) {
            if (words[i] == target) {
                int d = abs(i - startIndex);
                int ad = words.size() - abs(i - startIndex);
                dist = min(dist, min(d, ad));
            }
        }
        if (dist == INT_MAX) {
            return -1;
        }
        else {
            return dist;
        }
    }
};