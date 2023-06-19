// https://leetcode.com/problems/min-cost-climbing-stairs

class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        runningCost, i = 0, 0

        while i < len(cost) - 2:
            if cost[i+1] >= cost[i+2]:
                i+=2
            else:
                i+=1
            runningCost += cost[i]

        if i == len(cost) - 1:
            runningCost += cost[i]

        return runningCost