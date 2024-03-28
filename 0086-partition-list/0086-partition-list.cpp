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
    ListNode* partition(ListNode* head, int x) 
    {
        if(head==NULL||head->next==NULL)
        {
            return head;
        }
        int flag1=0,flag2=0;
        ListNode*temp1=head;
        ListNode*head2=NULL;
        ListNode*small=NULL;
        ListNode*large=NULL; 
        while(temp1!=NULL)
        {
            if(temp1->val<x)
            {
                ListNode*newnode =new ListNode(temp1->val);
                if(flag1==0)
                {
                    head=newnode;
                    small=newnode;
                    flag1=1;
                }
                else
                {
                    small->next=newnode;
                    small=newnode;
                }
                
            }
            else
            {
                ListNode*newnode =new ListNode(temp1->val);
                if(flag2==0)
                {
                    head2=newnode;
                    large=newnode;
                    flag2=1;
                }
                else
                {
                    large->next=newnode;
                    large=newnode;
                }
            }
            temp1=temp1->next;
        }
        if(small==NULL)
        {
            return head2;
        }
        small->next=head2;
        return head;
        
        
    }
};