/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    vector<vector<Node*>> LevelOrder(Node* root)
    {
        Node* head=root;
        vector<vector<Node*>> ans;
        if(root==NULL)
        {
            return ans;
        }
        
        queue<Node*> q;
        q.push(head);
        while(!q.empty())
        {
            int size=q.size();
            vector<Node*> level;
            for(int i=0;i<size;i++)
            {
                Node* fronti=q.front();
                q.pop();

                if(fronti->left!=NULL)
                {
                    q.push(fronti->left);
                }

                if(fronti->right!=NULL)
                {
                    q.push(fronti->right);
                }
                
                level.push_back(fronti);
            }
            ans.push_back(level);
            
        }
        
        return ans;
    }
    
    
    Node* connect(Node* root) {
        vector<vector<Node*>> ans;
        ans=LevelOrder(root);
        if(root!=NULL)
        {
            Node* head=root;

            head->next=NULL;
        }
        for(int i=1;i<ans.size();i++)
        {
            int sizee=ans[i].size();
            for(int j=0;j<sizee-1;j++)
            {
                Node* current=ans[i][j];
                Node* post=ans[i][j+1];
                current->next=post;
            }
            Node* finals=ans[i][sizee-1];
            finals->next=NULL;
        }
        return root;
    }
};