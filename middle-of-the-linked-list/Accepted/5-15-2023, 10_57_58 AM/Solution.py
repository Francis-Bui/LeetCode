// https://leetcode.com/problems/middle-of-the-linked-list

class Solution(object):
    def middleNode(self, head):
        temp = head
        while temp and temp.next:
            head = head.next
            temp = temp.next.next
        return head