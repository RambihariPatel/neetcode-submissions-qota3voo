class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int n = nums.size();
        deque<int> dq;
        vector<int> ans;

        while(j < n){

            while(!dq.empty() && nums[dq.back()] < nums[j]){
                dq.pop_back();
            }
            dq.push_back(j);

            if(j - i + 1 < k){
                j++;
            }
            else {
                if(dq.front() < i){
                    dq.pop_front();
                }
                ans.push_back(nums[dq.front()]);
                i++;
                j++;
            }
        }
        return ans;
    }
};
