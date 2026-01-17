class Solution {
public:
    int countOdds(int low, int high) {
        int cnt {0};
        // simple AP finding n 
        // adjust the range for odd number AP
        if (low % 2 == 0) {
            low = low + 1;
        }
        if (high % 2 == 0) {
            high = high - 1;
        }
        cnt = (high-low)/2 + 1;
        return cnt;
    }
};