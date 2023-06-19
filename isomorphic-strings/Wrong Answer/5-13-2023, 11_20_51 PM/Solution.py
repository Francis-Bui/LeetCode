// https://leetcode.com/problems/isomorphic-strings

class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:

        confirmString = [0]*len(s)

        for idx, item in enumerate(t):
            idx_char = s[idx]
            for i, char in enumerate(s):
                if char == idx_char:
                    confirmString[i] = item

        if ''.join(confirmString) == t:
            return True