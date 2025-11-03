class Solution {
public:
    int trap(vector<int>& height) {
        int max_water = 0;
        int n = height.size();
        vector<int> lmax (n, 0), rmax(n, 0);

        lmax[0] = height[0];  
        for (int i  = 1; i < height.size(); i++) {
            lmax[i] = max(height[i], lmax[i-1]);
        }

        rmax[n-1] = height[n-1];
        for (int i  = n-2; i>=0; i--) {
            rmax[i] = max(height[i], rmax[i+1]);
        }

        for (int i = 1; i < height.size(); i++) {
            max_water += min(lmax[i], rmax[i]) - height[i];
        }
        return max_water;
    }
};