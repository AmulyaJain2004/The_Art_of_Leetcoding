#include <vector>
#include <cmath>
#include <numeric>
#include <execution>
#include <algorithm>

class Solution {
public:
    int findNumbers(std::vector<int>& nums) {
        // 💡 Remember the syntax: POLICY, START, END, INITIAL_SUM, REDUCTION_OP, LAMBDA
        return std::transform_reduce(
            std::execution::par,        // 1. Inject the parallel policy
            nums.begin(), nums.end(),   // 2. Range
            0,                          // 3. Initial sum value
            std::plus<int>(),           // 4. Combine results by adding them up
            [](int num) {               // 5. The transformation logic for each item
                // Fast way to count digits without converting to string
                int digit_count = static_cast<int>(std::log10(num)) + 1;
                
                // Return 1 if even, 0 if odd
                return (digit_count % 2 == 0) ? 1 : 0;
            }
        );
    }
};
