// https://leetcode.com/problems/is-subsequence

class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        prev_idx = 0
        for idx, item in enumerate(s):

            if item not in t:
                return False

            if prev_idx > t.index(item):
                return False
            prev_idx = t.index(item)
            
        return True