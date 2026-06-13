class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        int n = nums.size();
        for(int i = 0; i< n; i++) {

            for(int j = i + 1; j< n; j++) {
                if(nums[i] > nums[j]) {
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
            }
            
        }
        return nums;
    }
};