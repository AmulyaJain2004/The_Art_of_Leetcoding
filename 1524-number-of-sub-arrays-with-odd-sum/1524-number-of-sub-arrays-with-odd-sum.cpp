class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const long long MOD = 1e9 + 7;

        long long cnt = 0;
        long long sum = 0;

        long long even = 1;  // empty prefix sum = 0
        long long odd = 0;

        for (int x : arr) {
            sum += x;

            if (sum % 2 == 1) {
                // odd - even = odd
                cnt += even;
                odd++;
            }
            else {
                // even - odd = odd
                cnt += odd;
                even++;
            }

            cnt %= MOD;
        }

        return cnt;
    }
};