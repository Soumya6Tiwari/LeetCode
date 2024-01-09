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
    ListNode* deleteMiddle(ListNode* head) 
    {
        ListNode*temp=new ListNode();
        ListNode*prev=new ListNode();
        ListNode*temp1=new ListNode();
        
        int length=0,mid;
        temp=head;
        
        
        while(temp!=NULL)
        {
            length++;
            temp=temp->next;
        }
        if(length==1)
        {
            temp1=NULL;
            return temp1;
        }
        
        mid=(length/2)+1;
        length=0;
        temp=head;
        prev=temp;
        while(temp!=NULL)
        {
            length++;
            
            
            if(length==mid)
            {
                prev->next=temp->next;
                break;     
            }
            prev=temp;
            temp=temp->next;
            
        }
        temp=head;
        return temp;
        
        
    }
};