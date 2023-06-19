// https://leetcode.com/problems/is-subsequence

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l = s.length();
        int m = t.length();
        int k = 0;

        if (l == 0) return true;

        for (unsigned int i = 0; i < m; i++) {
            if (s[k] == t[i]) {
                k++;
                if (k == l) return true;
            }
        }
        return false;
    }
};