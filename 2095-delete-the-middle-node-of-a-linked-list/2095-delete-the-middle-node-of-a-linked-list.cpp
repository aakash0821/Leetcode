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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL)
        {
            return NULL;
        }
        
        if(head->next->next==NULL)
        {
            head->next=NULL;
            return head;
        }
        ListNode*current=head;
        ListNode* pre;
        ListNode* tail=head;
        while(tail!=NULL && tail->next!=NULL)
        {
            pre=current;
            current=current->next;
            tail=tail->next->next;
        }
        pre->next=current->next;
        return head;
    }
};