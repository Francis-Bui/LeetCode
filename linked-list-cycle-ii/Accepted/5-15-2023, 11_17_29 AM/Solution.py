// https://leetcode.com/problems/linked-list-cycle-ii

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def detectCycle(self, head):
        curr = head
        i = 0
        valList = []

        while curr:
            valList.append(curr)
            next = curr.next
            curr = next
            if curr in valList:
                return curr

        return None


            