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
    
    int Solve(TreeNode* root)
    {
        int level=1;
        int finallevel=1;
        int maxi=INT_MIN;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            int sum=0;
            for(int i=0;i<size;i++)
            {
                TreeNode* front=q.front();
                q.pop();
                sum+=front->val;
                if(front->left!=NULL)
                {
                    q.push(front->left);
                }
                
                if(front->right!=NULL)
                {
                    q.push(front->right);
                }
                
               
            }
            
            if(sum>maxi)
            {
                maxi=sum;
                finallevel=level;
            }
            level++;
        }
        
        return finallevel;
    }
    int maxLevelSum(TreeNode* root) {
        return Solve(root);
    }
};