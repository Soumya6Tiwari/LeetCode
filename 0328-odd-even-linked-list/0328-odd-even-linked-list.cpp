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
    ListNode* oddEvenList(ListNode* head) 
    {
        if(head==NULL)
        {
            return head;
        }
        ListNode*temp=head;
        ListNode*even_head=NULL;
        ListNode*odd_head=NULL;
        ListNode*temp1=NULL;
        ListNode*temp2=NULL;
        int i,j,k,count=0,flag1=0,flag2=0;
        while(temp!=NULL)
        {
            count++;
            if(count%2==1)
            {
                ListNode*newnode=new ListNode(temp->val);
                if(flag1==0)
                {
                    odd_head=newnode;
                    temp1=newnode;
                    flag1=1;
                }
                else
                {
                temp1->next=newnode;
                temp1=newnode;
                }
                
            }
            else
            {
                ListNode*newnode=new ListNode(temp->val);
                if(flag2==0)
                {
                    even_head=newnode;
                    temp2=newnode;
                    flag2=1;
                }
                else
                {
                    
                
                temp2->next=newnode;
                temp2=newnode;
                }
                
            }
            temp=temp->next;
        }
        temp1->next=even_head;
        return odd_head;
        
    }
};