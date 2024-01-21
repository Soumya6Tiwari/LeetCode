/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head)
    {
        ListNode*fast=head;
        ListNode*slow=head;
        ListNode*start_node=new ListNode();
        while(fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;
                slow=slow->next;
            }
            if(fast==slow)
            {
                break;
            }
        }
        if(fast==NULL)
        {
           start_node=NULL;
            return start_node;
        }
        else
        {
            slow=head;
            while(slow!=fast)
            {
                slow=slow->next;
                fast=fast->next;         
            }
            start_node=slow;
        }
        return start_node;
        
    }
};