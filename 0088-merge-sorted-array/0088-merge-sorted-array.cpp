class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0, k=0;
        vector<int> nums3;
        while(i<m && j<n){
            if (nums1[i]>nums2[j]){
                nums3.push_back(nums2[j]);
                j++; 
            }
            else{
                nums3.push_back(nums1[i]);
                i++;
            }
        }
        if (i>=m){
            while(j<n){
                nums3.push_back(nums2[j]);
                j++;
            }
        }
        if (j>=n){
            while(i<m){
                nums3.push_back(nums1[i]);
                i++;
            }
        }
        for (int x = 0; x<m+n; x++){
            nums1[x] = nums3[x];
        }
    }
};