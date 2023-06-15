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
        ListNode* current=head;
        ListNode* post;
        ListNode* pre=NULL;
        
        while(current!=NULL)
        {
            post=current->next;
            current->next=pre;
            pre=current;
            current=post;
        }
        return pre;
    }
    void reorderList(ListNode* head){
        if(head->next==NULL || head->next->next==NULL)
        {
            return;
        }
        
        //ListNode* pre=NULL;
        ListNode* current=head;
        ListNode* tail=head;
        while(tail!=NULL && tail->next!=NULL)
        {
            //pre=current;
            current=current->next;
            tail=tail->next->next;
        }
        ListNode* current2=reverse(current->next);

        current->next=NULL;
        
        
        ListNode* t1=head;
        ListNode* t2=current2;
        ListNode* p1;
        ListNode* p2;
        while(t1!=NULL && t2!=NULL)
        {
            p1=t1->next;
            p2=t2->next;
            t1->next=t2;
            t2->next=p1;
            t1=p1;
            t2=p2;
        }
        return;
        
    }
};