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
    int height(TreeNode* root, int& diameter){
        if(root == nullptr) return 0;
        int lst = height(root->left, diameter);
        int rst = height(root->right, diameter);
        diameter = max(diameter, lst+rst);
        return max(lst,rst)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr) return 0;
        int diameter = 0;
        int lst = height(root, diameter);
        return diameter;
    }
};