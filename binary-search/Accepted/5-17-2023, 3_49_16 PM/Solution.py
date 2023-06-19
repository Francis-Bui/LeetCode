// https://leetcode.com/problems/binary-search

class Solution:
    def search(self, nums: List[int], target: int) -> int:
        if target not in nums:
            return -1
        else:
            for i, val in enumerate(nums):
                if val == target:
                    return i
                if val > target:
                    return -1