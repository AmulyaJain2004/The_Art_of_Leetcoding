class Solution {
public:
    int reverseBits(int n) {
        bitset<32> binary_representation(n);
        string binary_string = binary_representation.to_string();
        reverse(binary_string.begin(), binary_string.end());
        return stoi(binary_string, nullptr, 2);
    }
};