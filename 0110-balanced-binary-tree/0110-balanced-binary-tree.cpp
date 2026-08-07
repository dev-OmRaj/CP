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

        if(abs(lst-rst) >= 2) return -1;
        if(lst == -1 || rst == -1) return -1;

        return max(lst,rst)+1;
    }
    bool isBalanced(TreeNode* root) {
       if(height(root) == -1) return false;
       return true; 
    }
};