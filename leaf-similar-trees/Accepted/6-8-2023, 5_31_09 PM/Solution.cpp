// https://leetcode.com/problems/leaf-similar-trees

#include <vector>
using namespace std;
class Solution {
public:

    void leafSearch(TreeNode* node, vector<int>& seq) {

        if (!node) return;
        if (!node->left && !node->right)
            seq.push_back(node->val);

        leafSearch(node->left, seq);
        leafSearch(node->right, seq);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {

        vector<int> leafOne, leafTwo;

        leafSearch(root1, leafOne);
        leafSearch(root2, leafTwo);

        return (leafOne == leafTwo);
    }
};