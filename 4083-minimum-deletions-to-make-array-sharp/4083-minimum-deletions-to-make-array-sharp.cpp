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
    }
};