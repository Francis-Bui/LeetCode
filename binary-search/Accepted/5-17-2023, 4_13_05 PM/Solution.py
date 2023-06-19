// https://leetcode.com/problems/binary-search

class Solution:
    def search(self, nums: List[int], target: int) -> int:

        lo, hi = 0, len(nums)-1

        if len(nums) == None or 0:
            return -1

        if len(nums) == 1:
            if nums[0] == target:
                return 0

        elif len(nums) > 1:
            while lo < hi:
                mid = lo + math.floor((hi-lo+1)/2)
                if target < nums[mid]:
                    hi = mid - 1
                else:
                    lo = mid
            if nums[lo] == target:
                return lo
            else:
                return -1
        return -1