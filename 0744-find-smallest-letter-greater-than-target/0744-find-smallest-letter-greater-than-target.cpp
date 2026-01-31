class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 0;
        int right = letters.size() - 1;
        while (left <= right) {
            int mid = left + (right - left)/2;
            if (letters[mid] <= target) {
                left = mid + 1;
            }
            else {
                if ((mid - 1 >= 0 && letters[mid - 1] <= target) || (mid - 1 < 0 && letters[mid] > target)){
                    return letters[mid];
                }
                right = mid - 1;     
            }
        }
        return letters[0];
    }
};