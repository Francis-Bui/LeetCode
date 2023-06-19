// https://leetcode.com/problems/isomorphic-strings

class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:

        dupe_list_s = [idx for idx, item in enumerate(s) if item in s[:idx]]
        dupe_list_t = [idx for idx, item in enumerate(t) if item in t[:idx]]

        if dupe_list_s == dupe_list_t:
            return True
        return False
                