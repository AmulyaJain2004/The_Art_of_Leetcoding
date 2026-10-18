class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int cnt =1;
        int j=0;
        for (int i=1; i < nums.size(); i++){
            if (nums[i]!=nums[j]){
                nums[cnt] = nums[i];
                cnt ++;
                j=i;
            }
        }
        return (int)nums.size() - cnt;
        // Another Approach
        // int ans =0;
        // for(int i=0;i<nums.size();){
        //     int check =0;
        //     int j = i+1;
        //     while(j<nums.size() and nums[j] == nums[i]) j++;
        //     ans+=(j-i-1);
        //     i=j;
        // }
        // return ans;
    }
};