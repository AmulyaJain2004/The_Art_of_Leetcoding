class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        // unordered_map<int, int>mp;
        // for(int i = 0; i< nums.size(); i++) {
        //     if (nums[i]%2 == 0) {
        //         mp[nums[i]] ++;
        //     }
        // }
        // for (int i = 0; i < nums.size(); i++) {
        //     if (nums[i] %2 == 0) {
        //         if (mp[nums[i]] == 1) {
        //             return nums[i];
        //         }
        //     }
        // }
        // return -1;
        // since constraints are simple
        int arr[101];
        int n = nums.size();
        for( int i=0;i<n;i++){
            arr[nums[i]]++;
        }
        for(int x : nums){
            if( x%2==0 && arr[x]==1 )return x;
        }
        return -1;
    }
};