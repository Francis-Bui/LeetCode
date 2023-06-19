// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        j = 0
        max = 0
        for i, item in enumerate(prices):
            prices = prices[i:]
            for k, stock in enumerate(prices):
                delta = stock - item
                if delta > max:
                    max = abs(delta)
        return max

