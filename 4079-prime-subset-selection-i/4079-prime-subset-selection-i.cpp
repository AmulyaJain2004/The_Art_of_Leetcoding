class Solution {
public:
    vector<int> maxPrimes(int n, int s) {
        vector<int> ans;
        int sum = 0;
        // we need to use seive of eratosthenes
        vector<bool> primes(n+1,true);
        primes[0] = primes[1] = false;
        for (int i = 2; i*i <= n; i++) {
            if (primes[i]) {
                for (int j = i * i; j <= n; j += i) {
                    primes[j] = false;
                }
            }
        }
        for (int i = 2; i <= n; i ++) {
            if (primes[i]) {
                if (sum + i > s) {
                    break;
                }
                ans.push_back(i);
                sum += i;
            }
        }
        return ans;
    }
};