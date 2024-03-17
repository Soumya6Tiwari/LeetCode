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
    ListNode* mergeNodes(ListNode* head) 
    {
        int sum=0,flag=0;
        ListNode*temp=head->next;
        ListNode*temp2=NULL;
        ListNode*head1=NULL;
        while(temp!=NULL)
        {
            sum=sum+temp->val;
            if(temp->val==0)
            {
                ListNode*newnode=new ListNode(sum);
                sum=0;
                if(flag==0)
                {
                    head1=newnode;
                    temp2=head1;
                    flag=1;
                }
                else
                {
                    temp2->next=newnode;
                    temp2=newnode;
                }
            }
            temp=temp->next;
        }
        return head1;
        
    }
};