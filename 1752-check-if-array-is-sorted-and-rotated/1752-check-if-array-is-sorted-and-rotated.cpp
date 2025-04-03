class Solution {
public:
    bool check(vector<int>& nums) {
        int nrotations = num_rotations(nums);
        for (int i = 0; i < nums.size()-1; i ++){
            if (nums[(i+nrotations)%nums.size()] <= nums[(i+1+nrotations)%nums.size()]){
                continue;
            }
            else {
                return false;
            }
        }
        return true;
    }
    int num_rotations(vector<int>& nums){
        int num_rotation = 1;
        for (int i = 1; i < nums.size(); i++){
            if (nums[i] < nums[i-1]){
                break;
            }
            num_rotation ++;
        }
        return num_rotation;
    }
};