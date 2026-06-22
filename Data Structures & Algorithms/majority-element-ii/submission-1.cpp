class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if(nums.empty()) return {};

        unordered_map<int, int> mp;

        for(int num : nums){
            mp[num]++;
        }
        vector<int> ans;
        int n = nums.size();

        for(auto it: mp){

            if(it.second > n / 3) {
                ans.push_back(it.first);
            }

        }

        return ans;
    }
};