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
    ListNode* swapPairs(ListNode* head) {
        vector<int> vec;
        ListNode* current=head;
        while(current!=NULL)
        {
            vec.push_back(current->val);
            current=current->next;
        }
        int size=vec.size();
        
        if(size==0)
        {
            return NULL;
        }
        else if(size==1)
        {
            return head;
        }
        else
        {
            if(size%2==0)
            {
                for(int i=0;i<size;i=i+2)
                {
                    int temp=vec[i];
                    vec[i]=vec[i+1];
                    vec[i+1]=temp;
                }
                ListNode* newhead=NULL;
                ListNode* newtail=NULL;
                newhead=newtail=new ListNode(vec[0]);
                for(int i=1;i<size;i++)
                {
                    newtail->next=new ListNode(vec[i]);
                    newtail=newtail->next;
                }
                return newhead;
            }
            else
            {
                for(int i=0;i<(size-1);i=i+2)
                {
                    int temp=vec[i];
                    vec[i]=vec[i+1];
                    vec[i+1]=temp;
                }
                ListNode* newhead=NULL;
                ListNode* newtail=NULL;
                newhead=newtail=new ListNode(vec[0]);
                for(int i=1;i<(size);i++)
                {
                    newtail->next=new ListNode(vec[i]);
                    newtail=newtail->next;
                }
                return newhead;
            }
        }
    }
};