class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int dist = 0;
        int i = 0;
        for (int j = 1; j < n; j++) {
            if (colors[i] != colors[j]) {
                dist = max(dist, abs(i - j));
            }
            if (colors[n-i-1] != colors[j]) {
                dist = max(dist, abs(n-i-1 - j));
            }
        }
        return dist;
    }
};