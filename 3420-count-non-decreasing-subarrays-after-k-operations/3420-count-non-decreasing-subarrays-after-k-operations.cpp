class Solution {
public:
    typedef long long ll;

    long long countNonDecreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();

        vector<ll> cumSum(n);
        cumSum[0] = nums[0];
        for(int i = 1; i < n; i++) {
            cumSum[i] = nums[i] + cumSum[i-1];
        }

        //Range Sum
        auto rangeSum = [&](int i, int j) -> long long {
            if(i > j)
                return 0;

            return cumSum[j] - ((i > 0) ? cumSum[i-1] : 0);
        };

        //NGR[i] = n
        vector<int> NGR(n, n);
        stack<int> st;
        for(int i = 0; i < n; i++) {
            while(!st.empty() && nums[st.top()] < nums[i]) {
                NGR[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        //Operations[i] = total operns to make [i...n-1] non-decreasing
        vector<ll> Operations(n+1, 0);
        for(int i = n-1; i >= 0; i--) {
            int m = NGR[i];

            //i to m-1 segment
            ll segmentOprns = (1LL * nums[i] * (m-i)) - rangeSum(i, m-1);
            Operations[i] = segmentOprns + Operations[m];
        }


        //Ready for Sliding Window Maximum
        deque<int> deq;
        ll result = 0;
        int i = 0;
        int j = 0;

        while(j < n) {

            while(!deq.empty() && nums[deq.back()] < nums[j]) { //decreasing order maintained - monotonic ds
                deq.pop_back();
            }

            deq.push_back(j);

            //Shrink if required
            while(i <= j) {
                int m = deq.front(); //fayda hai sliding window maximum

                //i...j
                ll oprnsCount = (Operations[i] - Operations[m]) + (1LL * nums[m] * (j-m+1)) - rangeSum(m, j);

                if(oprnsCount <= k)
                    break;
                
                i++;
                if(deq.front() < i) {
                    deq.pop_front();
                }
            }

            result += (j-i+1);
            j++;
        }

        return result;
    }
};