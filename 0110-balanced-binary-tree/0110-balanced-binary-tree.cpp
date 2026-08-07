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
    int height(TreeNode* root){
        if(root == nullptr) return 0;

        int lst = height(root->left) + 1;
        int rst = height(root->right) + 1;

        return max(lst,rst);
    }
    bool isBalanced(TreeNode* root) {
        if(root == nullptr) return true;

        int lst = height(root->left);
        int rst = height(root->right);
        if(abs(lst-rst) >= 2) return false;

        if(!isBalanced(root->left) || !isBalanced(root->right)) return false;
        return true;
    }
};