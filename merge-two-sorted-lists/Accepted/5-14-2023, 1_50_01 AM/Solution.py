// https://leetcode.com/problems/merge-two-sorted-lists

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        # Initialize store node and pointer
        mergedList = ListNode(0)
        ptr = mergedList

        # Compare the head of the two lists
        while list1 and list2:
            if list1.val < list2.val:
                # Append the smaller value to the new list
                ptr.next = list1
                # Advance the pointer
                ptr = list1
                # Advance the head pointer of the first list
                list1 = list1.next
            else:
                # Append the smaller value to the new list
                ptr.next = list2
                # Advance the pointer
                ptr = list2
                # Advance the head pointer of the second list
                list2 = list2.next

        # Append the remaining nodes of the non-empty list to the new list
        if list1:
            ptr.next = list1
        else:
            ptr.next = list2
        # Return the head of the merged list
        return mergedList.next