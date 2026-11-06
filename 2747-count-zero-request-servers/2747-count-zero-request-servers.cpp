class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x,
                             vector<int>& queries) {
        
        // Sort logs by time
        sort(logs.begin(), logs.end(),
             [](auto &a, auto &b) {
                 return a[1] < b[1];
             });

        // Store {query_time, original_index}
        vector<pair<int, int>> q;

        for (int i = 0; i < queries.size(); i++) {
            q.push_back({queries[i], i});
        }

        sort(q.begin(), q.end());

        // count[id] = number of requests from this server
        // currently inside our sliding window
        vector<int> count(n + 1, 0);

        vector<int> ans(queries.size());

        int left = 0;
        int right = 0;
        int activeServers = 0;

        for (auto &[queryTime, index] : q) {

            // Add all logs with time <= queryTime
            while (right < logs.size() &&
                   logs[right][1] <= queryTime) {

                int server = logs[right][0];

                if (count[server] == 0) {
                    activeServers++;
                }

                count[server]++;
                right++;
            }

            // Remove logs with time < queryTime - x
            while (left < right &&
                   logs[left][1] < queryTime - x) {

                int server = logs[left][0];

                count[server]--;

                if (count[server] == 0) {
                    activeServers--;
                }

                left++;
            }

            ans[index] = n - activeServers;
        }

        return ans;
    }
};