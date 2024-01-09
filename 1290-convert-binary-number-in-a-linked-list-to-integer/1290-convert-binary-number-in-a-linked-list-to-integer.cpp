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
    int getDecimalValue(ListNode* head)
    {
        vector<int>res;
        int i,j,k,sum=0;
        ListNode*temp=new ListNode(head->val);
        temp=head;
        while(temp!=NULL)
        {
            res.push_back(temp->val);
            temp=temp->next;
        }
        int len=res.size()-1;
        for(i=0;i<res.size();i++)
        {
            sum=sum+res[i]*pow(2,len);
            len--;
        }
        return sum;
        
        
    }
};