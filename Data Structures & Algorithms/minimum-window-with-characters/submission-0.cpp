class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char,int> mp;

        for(char c:t)
            mp[c]++;

        int count = mp.size();

        int i = 0;
        int j = 0;

        int start = 0;
        int minLen = INT_MAX;

        while(j < s.size()){

            if(mp.find(s[j]) != mp.end()){
                mp[s[j]]--;

                if(mp[s[j]] == 0)
                    count--;
            }

            while(count == 0){

                if(j-i+1 < minLen){
                    minLen = j-i+1;
                    start = i;
                }

                if(mp.find(s[i]) != mp.end()){

                    mp[s[i]]++;

                    if(mp[s[i]] == 1)
                        count++;
                }

                i++;
            }

            j++;
        }

        if(minLen == INT_MAX)
            return "";

        return s.substr(start,minLen);
    }
};