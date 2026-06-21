class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int, int> mp;

        if(s.size() != t.size()) {
            return false;
        }

        for(char s: s) {
            mp[s]++;
        }

        for(char t : t){
            mp[t]--;
        }

        for(auto it : mp) {
            if(it.second != 0)     {
                return false;
            }
        }

        return true;
        
    }
};
