// https://leetcode.com/problems/count-good-nodes-in-binary-tree

class Solution {
public:

    void dfs(TreeNode* node, int mx, int &c) {
        if (!node) return;
        
        if (mx <= node->val) {
            mx = node->val;
            ++c;
        }
        dfs(node->left, mx, c);
        dfs(node->right, mx, c);
    }

    int goodNodes(TreeNode* root) {
        int c=0, mx=INT_MIN;
        dfs(root, mx, c);
        return c;
    }
};