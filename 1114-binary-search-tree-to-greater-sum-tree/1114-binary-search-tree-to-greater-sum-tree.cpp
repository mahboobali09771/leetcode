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
    int sum = 0;
    void reverseInorder(TreeNode* root){
        if(root==NULL) return;
        reverseInorder(root->right);
        root->val += sum;
        sum = root->val;
        reverseInorder(root->left);
    }
    TreeNode* bstToGst(TreeNode* root) {
        reverseInorder(root);
        return root;
    }
};