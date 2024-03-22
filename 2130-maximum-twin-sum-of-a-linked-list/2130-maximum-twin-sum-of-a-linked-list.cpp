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
    int pairSum(ListNode* head) 
    {
        int maxi=INT_MIN;
        vector<int>v;
        ListNode*temp=head;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        int i=0,j,k,sum=0;
        int length=v.size();
        j=length-1;
        while(i<=j)
        {
            sum=v[i]+v[j];
            maxi=max(maxi,sum);
            i++;
            j--;
        }
        return maxi;
            
        
    }
};