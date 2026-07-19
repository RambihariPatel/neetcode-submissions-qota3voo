class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0, i = 0;
        while(i < s.size()) {
            if (s[i] == ' ') {
                while (i < s.length() && s[i] == ' ') {
                    i++;
                }
                if (i == s.length()) {
                    return length;
                }
                length = 0;
            } else {
                length++;
                i++;
            }
        }
        return length;
    }
};