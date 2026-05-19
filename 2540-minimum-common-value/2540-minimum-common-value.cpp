class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int min_element = -1;
        int num_ptr1 = 0;
        int num_ptr2 = 0;
        while(num_ptr1 < nums1.size() && num_ptr2 < nums2.size()) {
            if ( nums1[num_ptr1] < nums2[num_ptr2]) {
                num_ptr1 ++;
            } 
            else if ( nums1[num_ptr1] > nums2[num_ptr2]) {
                num_ptr2 ++;
            }
            else {
                min_element = nums1[num_ptr1];
                break;
            }
        }
        return min_element;
    }
};