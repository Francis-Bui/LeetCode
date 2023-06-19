// https://leetcode.com/problems/is-subsequence

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int k = 0;

        if (s.length() == 0) return true;
        
        for (unsigned int i = 0; i < t.length(); i++) {
            if (s[k] == t[i]) {
                k++;
                if (k == s.length()) return true;
            }
        }
        return false;
    }
};