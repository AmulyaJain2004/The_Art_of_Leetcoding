class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0;
        int high = (int)arr.size() - 1;
        while (low < high) {
            int mid = (low & high) + ((low ^ high) >> 1);
            if (arr[mid] > arr[mid + 1]) {
                high = mid;
            }
            else {
                low = mid + 1;
            }
        }
        return high;
    }
};