class Solution {
public:
    vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {
        int n = servers.size();
        int m = tasks.size();
        // available: {weight, index}
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> available;
        // busy: {freeTime, weight, index}
        priority_queue<vector<long long>, vector<vector<long long>>, greater<vector<long long>>> busy;

        for (int i = 0; i < n; i++) {
            available.push({servers[i], i});
        }
        vector<int> ans(m);
        long long time = 0;

        for (int j = 0; j < m; j++) {
            time = max(time, (long long)j);
            // we have to Free all servers that have finished first
            while (!busy.empty() && busy.top()[0] <= time) {
                auto x = busy.top();
                busy.pop();
                available.push({(int)x[1], (int)x[2]});
            }
            // No server available matlb jump to earliest free time
            if (available.empty()) {
                time = busy.top()[0];
                while (!busy.empty() && busy.top()[0] <= time) {
                    auto x = busy.top();
                    busy.pop();
                    available.push({(int)x[1], (int)x[2]});
                }
            }
            auto [weight, index] = available.top();
            available.pop();
            ans[j] = index;
            // so Server becomes busy
            long long freeTime = time + tasks[j];
            busy.push({freeTime, weight, index});
        }
        return ans;
    }
};