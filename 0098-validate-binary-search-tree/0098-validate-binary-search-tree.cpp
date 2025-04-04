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
    void inorder(TreeNode* root,vector<int>& ans){
        if(root==NULL) return;
        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }
    bool isValidBST(TreeNode* root) {
        vector<int> ans;
        inorder(root, ans);
        for(int i=1;i<ans.size();i++){
            if(ans[i]<=ans[i-1]) return false;
        }
        return true;
    }
};
 /*
class Solution {
public:
    long long maxTree(TreeNode* root){
        if(root==NULL) return LLONG_MIN;
        return max((long long)(root->val),max(maxTree(root->left),maxTree(root->right)));
    }
     long long minTree(TreeNode* root){
        if(root==NULL) return LLONG_MAX;
        return min((long long)(root->val),min(minTree(root->left),minTree(root->right)));
    }
    bool isValidBST(TreeNode* root) {
        if(root == NULL) return true;
        else if((long long)(root->val)<=maxTree(root->left)) return false;
        else if ((long long)(root->val)>=minTree(root->right)) return false;
        return isValidBST(root->left) && isValidBST(root->right);
    }
};
*/