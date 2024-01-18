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
    ListNode* Solve_using_recursion(ListNode*prev,ListNode*curr)
    {
        if(curr==NULL)
        {
            return prev;
        }
        ListNode*newnode=new ListNode();
        newnode=curr->next;
        curr->next=prev;
        prev=curr;
        curr=newnode;
        ListNode*ans= Solve_using_recursion(prev,curr);
        return  ans;
       
    }
    ListNode* reverseList(ListNode* head)
    {
        //ITERATIVE METHOD
        
        // int i,j,k;
        // ListNode*prev=new ListNode();
        // ListNode*curr=new ListNode();
        // ListNode*nextnode=new ListNode();
        // prev=NULL;
        // curr=head;
        // while(curr!=NULL)
        // {
        //     nextnode=curr->next;
        //     curr->next=prev;
        //     prev=curr;
        //     curr=nextnode;
        // }
        // head=prev;
        // return head;
        
        //RECURSION METHOD
         ListNode*prev=new ListNode();
         ListNode*curr=new ListNode();
        
        prev=NULL;
        curr=head;
    
        ListNode*ans=Solve_using_recursion(prev,curr);
        return ans;
    }
};