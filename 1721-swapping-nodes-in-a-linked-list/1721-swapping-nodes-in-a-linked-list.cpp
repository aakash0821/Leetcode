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
    
//     void swap(int *a, int *b)
//     {
//         int temp=*a;
//         *a=*b;
//         *b=*a;
        
//     }
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* current=head;
        vector<int> vec;
        while(current!=NULL)
        {
            vec.push_back(current->val);
            current=current->next;
        }
        
        int size=vec.size();
        //swap(&vec[k-1], &vec[size-k]);
        int temp=vec[k-1];
        vec[k-1]=vec[size-k];
        vec[size-k]=temp;
        
        ListNode* head2=new ListNode(vec[0]);
        ListNode* current2=head2;
        for(int i=1;i<vec.size();i++)
        {
            current2->next=new ListNode(vec[i]);
            current2=current2->next;
        }
        return head2;
    }
};