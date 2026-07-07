class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int i = 0;
        int j = 0;
        unordered_map<char, int> mp;

        for(char ch: s1) {
            mp[ch]++;
        }
        int count = mp.size();
        int k = s1.size();

        int n = s2.size();
        while(j < n){
            if(mp.find(s2[j]) != mp.end()){
                mp[s2[j]]--;
                if(mp[s2[j]] == 0){
                    count --;
                }

            }
            if(j - i + 1 < k){
                j++;
            }
            else {
                if(count == 0){
                    return true;
                }

                if(mp.find(s2[i]) != mp.end()){
                    if(mp[s2[i]] == 0){
                        count ++;
                    }
                    mp[s2[i]]++;
                }
                i++;
                j++;

            }
        }
        return false;
    }
};
