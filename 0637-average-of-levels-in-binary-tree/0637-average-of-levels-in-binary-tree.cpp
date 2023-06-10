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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> vec;
        
        if(root==NULL)
        {
            return vec;
        }
        
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            long long int size=q.size();
            long long int total=0;
            long long int count=0;
            for(int i=0;i<size;i++)
            {
                TreeNode* fr=q.front();
                q.pop();
                if(fr->left!=NULL) q.push(fr->left);
                if(fr->right!=NULL) q.push(fr->right);
                total+=fr->val;
                count++;
            }
            double ans=(double)total/(count);
            vec.push_back(ans);
        }
        return vec;
    }
};