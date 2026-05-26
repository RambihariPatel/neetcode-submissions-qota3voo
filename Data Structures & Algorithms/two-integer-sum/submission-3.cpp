class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> ans;
        int n = nums.size();

        for(int i = 0; i< n; i++){
            int first = nums[i];
            int sec = target - first;

            if(mp.find(sec) != mp.end()) {
                ans.push_back(mp[sec]);
                ans.push_back(i);
                
                break;
            }
            mp[first] = i;
        }
        return ans;
    }
};
