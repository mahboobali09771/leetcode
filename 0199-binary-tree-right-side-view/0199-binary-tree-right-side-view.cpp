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