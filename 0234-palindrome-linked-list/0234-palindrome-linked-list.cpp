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
    bool isPalindrome(ListNode* head)
    {
        //for finding the midpoint of the ll
        ListNode*fast=new ListNode();
        ListNode*slow=new ListNode();
        fast=head;
        slow=head;
        while(fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;
                slow=slow->next;
            }
        }
        
        //for reversing the ll ie its second half part;
        ListNode *prev=new ListNode();
        ListNode *curr=new ListNode();
        ListNode *newnode=new ListNode();
        prev=NULL;
        curr=slow;
        
        while(curr!=NULL)
        {
            newnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=newnode;     
        }
        slow=prev;
        ListNode*temp=new ListNode();
        temp=head;
        while(temp!=NULL&&slow!=NULL)
        {
            if(temp->val!=slow->val)
            {
                return false;
            }
            temp=temp->next;
            slow=slow->next;
        }
        return true;
        
    }
};