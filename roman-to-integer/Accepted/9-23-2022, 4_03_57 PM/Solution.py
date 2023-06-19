// https://leetcode.com/problems/roman-to-integer

import numpy as np

class Solution:
    def romanToInt(self, s: str) -> int:
        total = 0
        last = 0
        a = np.array([['M', 1000], ['D', 500], ['C', 100], ['L', 50], ['X', 10], ['V',5], ['I', 1]])
        for x in range(len(s)):
            for idx in range(len(a)):
                if s[x] == a[idx, 0]:
                    if a[idx, 1].astype(np.int) <= last:
                        last = a[idx, 1].astype(np.int)
                        total = total + last
                    elif a[idx, 1].astype(np.int) > last:
                        total = total + (a[idx, 1].astype(np.int) - last - last)
                        last = a[idx, 1].astype(np.int)
        return total
                        