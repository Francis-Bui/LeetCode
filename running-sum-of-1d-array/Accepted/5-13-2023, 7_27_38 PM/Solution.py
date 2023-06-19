// https://leetcode.com/problems/running-sum-of-1d-array

class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:

        runningSum = [0]*len(nums)
        
        for i, item in enumerate(nums):
            if i >= 1:
                runningSum[i] = item + runningSum[i-1]
            else:
                runningSum[i] = item

        return runningSum