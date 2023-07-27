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
    int ans(TreeNode* root,  bool flag)
    {
        if(root->left==NULL && root->right==NULL)
        {
            if(flag) return root->val;
            else return 0;
        }
        int left=0;
        int right=0;
        if(root->left!=NULL) left=ans(root->left, true);
        if(root->right!=NULL) right=ans(root->right, false);
        return (left+right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return ans(root, false);
    }
};