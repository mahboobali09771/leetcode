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
    TreeNode* build(vector<int>& pos, int poslo, int poshi, vector<int>& in, int inlo, int inhi){
        if(poslo>poshi) return NULL;
        TreeNode* root = new TreeNode(pos[poshi]);
        if(poslo==poshi) return root;
        int i = inlo;
        while(i<=inhi){
            if(in[i]==pos[poshi]) break;
            i++;
        }
        int leftCount = i - inlo;
        root->left = build(pos, poslo, poslo+leftCount-1, in, inlo, i-1);
        root->right = build(pos, poslo+leftCount, poshi-1, in, i+1, inhi);
        return root;
    }
    TreeNode* buildTree(vector<int>& in, vector<int>& pos) {
        int n = pos.size();
        return build(pos, 0, n-1, in, 0, n-1);
    }
};