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
    ListNode* middleNode(ListNode* head)
    {
        int length=0,mid,i,j,k,ans;
        ListNode*temp=head;
        while(temp!=NULL)
        {
            length++;
            temp=temp->next;
            
        }
        ans=(length/2)+1;
        length=0;
        temp=head;
        while(length<ans-1)
        {
            length++;
            temp=temp->next;
            
        }
        return temp;
        
    }
};