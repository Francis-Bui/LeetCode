// https://leetcode.com/problems/isomorphic-strings

class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:

        confirmString = [0]*len(s)
        history = confirmString

        for idx, item in enumerate(t):
            idx_char = s[idx]
            if item not in confirmString:
                for i, char in enumerate(s):
                    if char == idx_char:
                        confirmString[i] = item

        try:
            if ''.join(confirmString) == t:
                return True
        except:
            return False
        