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
    TreeNode* helper(vector<int>&arr, int lo, int hi){
        if(lo>hi) return NULL;
        int mid = lo + (hi-lo)/2;
        TreeNode* root = new TreeNode(arr[mid]);
        root->left = helper(arr,lo,mid-1);
        root->right = helper(arr,mid+1,hi);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& arr) {
        int n = arr.size();
        return helper(arr,0,n-1);
    }
};