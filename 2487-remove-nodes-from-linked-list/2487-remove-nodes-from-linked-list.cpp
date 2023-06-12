/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    ListNode* reverse(ListNode* head)
    {
        ListNode* pre=NULL;
        ListNode* current=head;
        ListNode* post;
        while(current!=NULL)
        {
            post=current->next;
            current->next=pre;
            pre=current;
            current=post;
        }
        return pre;
    }
    ListNode* removeNodes(ListNode* head) {
//         vector<int> vec;
//         ListNode* current=head;
//         while(current!=NULL)
//         {
//             vec.push_back(current->val);
//         }
//         int size=
//         vector<int> right;
//         for(int i=vec.size()-2;i>=0;i--)
//         {
            
//         }
        
        ListNode* test=reverse(head);
        ListNode* pre=test;
        ListNode* current=pre->next;
        while(current!=NULL)
        {
            if(current->val>=pre->val)
            {
                pre->next=current;
                pre=current;
                current=current->next;
            }
            else
            {
                current=current->next;
            }
        }
        pre->next=NULL;
        return reverse(test);
        
        
    }
};