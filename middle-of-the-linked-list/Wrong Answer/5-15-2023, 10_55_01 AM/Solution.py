// https://leetcode.com/problems/middle-of-the-linked-list

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head):
        curr = head
        prev = None

        temp = head
        i = 0
        j = 0
        while temp != None:
            i+=1
            temp = temp.next
        
        i = math.ceil((i-1)/2)

        while curr:
            next = curr.next
            curr = next
            j+=1
            if j==i:
                return curr