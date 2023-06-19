// https://leetcode.com/problems/validate-binary-search-tree

class Solution(object):
    def isValidBST(self, root, maximum = float('-inf'), minimum = float('inf')):
        # Base case: root is null...
        if not root: return True
        # If the value of root is less thsn minimum Or greater than maximum...
        if not maximum < root.val < minimum: return False
        # Recursively call the function for the left and right subtree...
        return self.isValidBST(root.left, maximum, root.val) and self.isValidBST(root.right, root.val, minimum)