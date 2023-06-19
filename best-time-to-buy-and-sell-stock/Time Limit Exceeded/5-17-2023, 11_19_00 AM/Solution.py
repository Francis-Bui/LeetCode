// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        max = 0
        for i, item in enumerate(prices):
            cutPrice = prices[i:]
            for k, stock in enumerate(cutPrice):
                delta = -item + stock
                if delta > max:
                    max = delta
        return max

