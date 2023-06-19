// https://leetcode.com/problems/roman-to-integer

import numpy as np

class Solution:
    def romanToInt(self, s: str) -> int:
        total = 0
        a = np.array([['M', 1000], ['D', 500], ['C', 100], ['L', 50], ['X', 10], ['V',5], ['I', 1]])
        print (a[0,1])
        for x in range(len(s)):
            for idx in range(len(a)):
                if s[x] == a[idx, 0]:
                    total = total + a[0,1]
                    print (total)
                        