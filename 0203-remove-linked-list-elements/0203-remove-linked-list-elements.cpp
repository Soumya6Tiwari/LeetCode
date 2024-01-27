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
    ListNode* removeElements(ListNode* head, int val) 
    {
        if(head==NULL)
        {
            return head;
        }
        ListNode*curr=head;
        ListNode*prev=NULL;
        while(curr!=NULL)
        {
            ListNode*temp=NULL;
            
            if(curr->val==val)
            {
                if(curr==head)
                {
                    temp=head;
                    head=head->next;
                    temp->next=NULL;
                    delete temp;
                    curr=head;       
                }
                else
                {
                    prev->next=curr->next;
                    temp=curr;
                    curr=curr->next;
                    temp->next=NULL;
                    delete temp;
                }
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