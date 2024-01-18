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
    bool hasCycle(ListNode *head)
    {
        //USING MAP METHOD
//         map<ListNode*,bool>m;
//         ListNode*temp=new ListNode();
//         temp=head;
        
        
        
        
        // USING TWO POINTER METHOD
        ListNode*fast=new ListNode();
        ListNode*slow=new ListNode();
        fast=head;
        slow=head;
        if(head==NULL)
        {
            return false;
        }
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
                // return true;
            }
        }
        if(fast==slow)
        {
            return true;
        }
        return false;
        
    }
};