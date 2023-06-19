// https://leetcode.com/problems/two-sum

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for idx, prim in enumerate(nums):
            altnums = nums[1 + idx:]
            for i, sec in enumerate(altnums):
                if prim + sec == target:
                    return [idx, idx + i + 1]