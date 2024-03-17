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
    int gcd(int val1,int val2)
    {
        int i,j,k,maxi=INT_MIN,gre;
        if(val1>=val2)
        {
            gre=val1;
        }
        else
        {
            gre=val2;
        }
        for(i=1;i<=gre;i++)
        {
            if(val1%i==0&&val2%i==0)
            {
                if(i>=maxi)
                {
                    maxi=i;
                }
            }
        }
        return maxi;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head)
    {
        ListNode*temp=head;
        
        int val1=0,val2=0,res;
        while(temp!=NULL&&temp->next!=NULL)
        {
            ListNode*curr=temp->next;
            val1=temp->val;
            val2=curr->val;
            res=gcd(val1,val2);
            ListNode*newnode=new ListNode(res);
            temp->next=newnode;
            newnode->next=curr;
            temp=curr;
        }
        return head;
        
    }
};