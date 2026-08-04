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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root == nullptr) return ans;
        stack<TreeNode*> s;
        // s.push(root);
        TreeNode* temp = root;
        while(!s.empty() || temp){
            while(temp != nullptr){
                s.push(temp);
                temp = temp->left;
            }
            TreeNode* curr = s.top();
            ans.push_back(curr->val);
            s.pop();
            temp = curr->right;
        }
        return ans;
    }
};