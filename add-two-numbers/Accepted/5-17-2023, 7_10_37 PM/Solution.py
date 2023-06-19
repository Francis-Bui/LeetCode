// https://leetcode.com/problems/add-two-numbers

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:

        def lst2link(lst):
            cur = dummy = ListNode(0)
            for e in lst:
                cur.next = ListNode(e)
                cur = cur.next
            return dummy.next

        num1, num2 = [], []

        while l1 != None:
            num1.append(l1.val)
            l1 = l1.next
        
        while l2 != None:
            num2.append(l2.val)
            l2 = l2.next
        
        num1 = ''.join((str(num1[num]) for num in range(len(num1))[::-1]))
        num2 = ''.join((str(num2[num]) for num in range(len(num2))[::-1]))

        total = int(num1) + int(num2)

        total = [int(d) for d in str(total)[::-1]]

        return lst2link(total)

        
            