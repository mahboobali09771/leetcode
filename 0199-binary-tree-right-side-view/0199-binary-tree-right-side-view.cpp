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
        int levels(TreeNode* root){
            if(root==NULL) return 0;
            return 1 + max(levels(root->left),levels(root->right));
        }
        void preOrder(TreeNode* root,vector<int>& ans, int level){
            if(root==NULL) return;
            ans[level] = root->val;
            preOrder(root->left,ans,level+1);
            preOrder(root->right,ans,level+1);
        }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans(levels(root),0);
        preOrder(root,ans,0);

       return ans; 
    }
    
};
 /*
class Solution {
public:
        int level(TreeNode* root){
            if(root==NULL) return 0;
            return 1 + max(level(root->left),level(root->right));
        }
        void nthlevel(TreeNode* root,int curr, int levels,vector<int>& ans){
        if(root==NULL) return;
        if(curr==levels){
            ans[curr] = root->val;
        }
        nthlevel(root->left,curr+1,levels,ans);
        nthlevel(root->right,curr+1,levels,ans);
        }
        
        void levelOrder(TreeNode* root,vector<int>& ans){
            int n = ans.size();
            for(int i=0;i<n;i++){
                nthlevel(root,0,i,ans);
            }
        }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans(level(root),0);
        levelOrder(root,ans);

       return ans; 
    }
    
};
*/