class Solution {
public:
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& occupiedIntervals, int freeStart, int freeEnd) {
        vector<vector<int>> merged;
        sort(occupiedIntervals.begin(), occupiedIntervals.end());
        vector<int>current = occupiedIntervals[0];
        merged.push_back(current);
        for (int i = 1; i < occupiedIntervals.size(); i++) {
            current = occupiedIntervals[i];
            if (current[0] <= merged.back()[1] + 1) {
                merged.back()[1] = max(merged.back()[1], current[1]);
            }
            else {
                merged.push_back(current);
            }
        }
        vector<vector<int>> ans;
        for (auto &interval : merged) {
            int l = interval[0];
            int r = interval[1];
        
            if (r < freeStart || l > freeEnd) {
                ans.push_back  ( {l, r});
            } else {
                if (l < freeStart)
                    ans.push_back({l, freeStart - 1});
            
                if (r >  freeEnd)
                    ans.push_back( {freeEnd + 1, r});}
        }
        return ans ;
    }
};