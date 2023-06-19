// https://leetcode.com/problems/is-subsequence

class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        prev_idx = 0

        if len(s) == len(t) and s != t:
            return False

        for idx, item in enumerate(s):

            if item not in t:
                return False

            try:
                if prev_idx > t.index(item, prev_idx + 1):
                    return False
            except:
                return False

            try:
                prev_idx = t.index(item, prev_idx)
            except:
                return False

        return True