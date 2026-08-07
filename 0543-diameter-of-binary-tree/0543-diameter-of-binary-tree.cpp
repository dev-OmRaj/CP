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
        int lst = height(root->left);
        int rst = height(root->right);

        return max(lst,rst)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return 0;
        
        int lst = height(root->left);
        int rst = height(root->right);

        int ans = max(lst+rst, max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right)));
        return ans;
    }
};