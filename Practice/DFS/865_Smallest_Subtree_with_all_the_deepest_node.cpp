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
class Solution {
public:
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        depth(root, 0);
        return ans;
    }
    TreeNode* ans;
    int max_depth = 0;
    int depth(TreeNode* root, int d){
        max_depth = max(d, max_depth);
        if(!root) return 0;
        d++;
        int left = depth(root->left, d);
        int right = depth(root->right, d);
        if (left == right && left + d == max_depth) ans = root;
        return max(left, right) + 1;
    }
};
