// https://leetcode.com/problems/count-good-nodes-in-binary-tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:

    void dfs(TreeNode* node, vector<int>& seq) {
        if (!node) return;
        seq.push_back(node->val);

        if (node->val < *max_element(seq.begin(), seq.end())) {
            seq.pop_back();
        }

        dfs(node->left, seq);
        dfs(node->right, seq);
    }

    int goodNodes(TreeNode* root) {
        vector<int> vec;
        dfs(root, vec);
        return vec.size();
    }
};