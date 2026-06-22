class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int nums0 = 0, nums1 = 0, nums2 = 0;

        for(int i = 0; i< n; i++) {
            if(nums[i] == 0) nums0++;
            else if(nums[i] == 1) nums1++;
            else nums2++;
        }

        int idx = 0;

        for(int i = 0; i < nums0; i++) {
            nums[idx++] = 0;
        }

        for(int i = 0; i < nums1; i++) {
            nums[idx++] = 1;
        }
        for(int i = 0; i < nums2; i++) {
            nums[idx++] = 2;
        }
    }
};