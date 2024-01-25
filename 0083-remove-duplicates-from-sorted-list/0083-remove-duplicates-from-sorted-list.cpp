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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(head==NULL)
        {
            return head;
        }
       ListNode*prev=head;
        ListNode*curr=prev->next;
        
        int length=0;
        ListNode*temp1=head;
        while(temp1!=NULL)
        {
            length++;
            temp1=temp1->next;
        }
        if(length<2)
        {
            return head;
        }
        while(curr!=NULL)
        {
            if(prev->val==curr->val)
            {
                ListNode*temp=curr;
                curr=curr->next;
                prev->next=curr;
                temp->next=NULL;
                delete temp;
            }
            else
            {
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
    }
};