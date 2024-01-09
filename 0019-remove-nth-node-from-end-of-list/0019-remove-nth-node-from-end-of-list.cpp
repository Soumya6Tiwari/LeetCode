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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode *temp=new ListNode();
        ListNode *prev=new ListNode();
        int length=0,val;
        temp=head;
        while(temp!=NULL)
        {
            length++;
            temp=temp->next;
        }
        if(length==n)
        {
            temp=head->next;
            return temp;
        }
        val=(length-n)+1;
        if(val==1)
        {
            prev=NULL;
            return prev;
            
        }
        
        length=0;
        temp=head;
    
        while(temp!=NULL)
        {
            length++;
            if(val==length)
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