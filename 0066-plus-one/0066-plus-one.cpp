class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= -1; i--) {
            if (i>= 0 && digits[i] == 9){
                digits[i] = 0;
            }
            else if (i>= 0 && digits[i] != 9) {
                digits[i] = digits[i] + 1;
                break;
            }
            else {
                digits.insert(digits.begin(), 1);
                break;
            }
        }
        return digits;
    }
};