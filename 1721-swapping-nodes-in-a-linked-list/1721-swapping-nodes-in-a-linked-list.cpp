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
    ListNode* swapNodes(ListNode* head, int k) 
    {
        ListNode*temp=new ListNode();
        ListNode*first=new ListNode();
        ListNode*second=new ListNode();
        int len=0,one,two,i=0,temp1;
        temp=head;
        while(temp!=NULL)
        {
            len++;
            temp=temp->next;
        }
        one=k;
        
        two=len-k+1;
        if(one>two)
        {
            one=two;
            two=k;
        }
        len=0;
        temp=head;
        while(temp!=NULL)
        {
            len++;
            if(len==one)
            {
                first=temp;
            }
            if(len==two)
            {
                second=temp;
                temp1=first->val;
                first->val=second->val;
                second->val=temp1;
                break;
            }
            temp=temp->next;
        }
        temp=head;
        return temp;
    }
};