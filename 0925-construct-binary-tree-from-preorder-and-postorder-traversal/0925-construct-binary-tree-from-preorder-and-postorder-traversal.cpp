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
    TreeNode* build(vector<int>& pre, int prelo, int prehi, vector<int>& pos, int poslo, int poshi){
        if(prelo>prehi) return NULL;
        TreeNode* root = new TreeNode(pre[prelo]);
        if(prelo==prehi) return root;
        int i = poslo;
        while(i<=poshi){
            if(pos[i]==pre[prelo + 1]) break;
            i++;
        }
        int leftCount = i - poslo + 1;
        root->left = build(pre, prelo+1, prelo+leftCount, pos, poslo, i);
        root->right = build(pre, prelo+leftCount+1, prehi, pos, i+1, poshi-1);
        return root;
    }
    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& pos) {
        int n = pre.size();
        return build(pre, 0, n-1, pos, 0, n-1);
    }
};