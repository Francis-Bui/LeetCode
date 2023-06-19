// https://leetcode.com/problems/min-cost-climbing-stairs

class Solution:
    def minCostClimbingStairs(self, cost: List[int]) -> int:
        runningCost, i = 0, 0
        
        while i < len(cost) - 1:
            if i+2 > len(cost) - 1:
                if cost[i+1] <= cost[i]:
                    runningCost += cost[i+1]
                else:
                    runningCost += cost[i]
                break

            if cost[i+1] <= cost[i] + cost[i+2] or i+1 == len(cost) - 1:
                runningCost += cost[i+1]
                i+=2
            else:
                runningCost += cost[i]
                i+=1

        return runningCost