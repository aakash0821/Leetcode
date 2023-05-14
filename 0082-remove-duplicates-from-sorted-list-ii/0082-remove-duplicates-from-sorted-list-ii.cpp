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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
        {
            return NULL;
        }
        else
        {
            
        
            ListNode* current=head->next;
            ListNode* pre=head;
            int check=head->val;
            int total=1;

            ListNode* newhead=NULL;
            ListNode* newtail=NULL;
            while(current!=NULL)
            {
                if(current->val==check)
                {
                    current=current->next;
                    total++;
                }
                else
                {
                    if(total==1)
                    {
                        if(newhead==NULL)
                        {
                            newhead=new ListNode(check);
                            newtail=newhead;
                            check=current->val;
                            total=1;
                            current=current->next;
                        }
                        else
                        {
                            newtail->next=new ListNode(check);
                            newtail=newtail->next;
                            check=current->val;
                            total=1;
                            current=current->next;
                        }
                    }
                    else
                    {
                        total=1;
                        check=current->val;
                        current=current->next;
                    }
                }
            }

            if(total==1)
            {
                if(newhead==NULL)
                {
                    newhead=newtail=new ListNode(check);
                }
                else
                {
                    newtail->next=new ListNode(check);
                    newtail=newtail->next;
                }
            }
            return newhead;
        }
        
    }
};