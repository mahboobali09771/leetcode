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
   
    void lOrder(TreeNode* root,vector<vector<int>>& ans,int level){
        if(root==NULL) return;
        ans[level].push_back(root->val);
        lOrder(root->left,ans,level+1);
        lOrder(root->right,ans,level+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int n = levels(root);
        vector<vector<int>> ans;
        for(int i=1;i<=n;i++){
            vector<int> v;
            ans.push_back(v);
        }
        lOrder(root,ans,0);
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
    void nthlevel(TreeNode* root,int curr, int level,vector<int>& v){
        if(root==NULL) return;
        if(curr==level){
            v.push_back(root->val);
            return;
        }
        nthlevel(root->left,curr+1,level,v);
        nthlevel(root->right,curr+1,level,v);
    }
   
    void lOrder(TreeNode* root,vector<vector<int>>& ans){
        int n = level(root);
        for(int i=1;i<=n;i++){
            vector<int> v;
            nthlevel(root,1,i,v);
            ans.push_back(v);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        lOrder(root,ans);
        return ans;
    }
};
*/