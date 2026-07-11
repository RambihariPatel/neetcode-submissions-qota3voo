class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        unordered_map<int, int> mp;

        int sum = 0;
        int ans = 0;

        mp[0] = 1;

        for (int i = 0; i < nums.size(); i++) {

            sum += nums[i];

            if (mp.find(sum - goal) != mp.end()) {
                ans += mp[sum - goal];
            }

            // if ke bahar rahega
            mp[sum]++;
        }

        return ans;
    }
};