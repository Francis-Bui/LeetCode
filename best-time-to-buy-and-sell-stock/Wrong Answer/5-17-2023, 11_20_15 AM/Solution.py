// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        max = 0
        for i, item in enumerate(prices):
            if item == 0:
                continue
            cutPrice = prices[i:]
            for k, stock in enumerate(cutPrice):
                if stock == 0:
                    continue
                delta = -item + stock
                if delta > max:
                    max = delta
        return max

