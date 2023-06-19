// https://leetcode.com/problems/linked-list-cycle-ii

class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        slow, fast = head, head
        while fast != None and fast.next != None:
            slow = slow.next
            fast = fast.next.next
            if slow == fast:
                tmp1 = head
                tmp2 = slow
                while tmp1 != tmp2:
                    tmp1 = tmp1.next
                    tmp2 = tmp2.next
                return tmp1
        return None