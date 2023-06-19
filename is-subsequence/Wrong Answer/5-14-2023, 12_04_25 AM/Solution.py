// https://leetcode.com/problems/is-subsequence

class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        prev_idx = -1

        if len(s) == len(t) and s != t:
            return False

        for idx, item in enumerate(s):

            if item not in t:
                return False

            if prev_idx >= t.index(item):
                try:
                    if prev_idx >= t.index(item, t.index(item +1)):
                        break
                except: 
                    return False
                return False

            prev_idx = t.index(item)

        return True