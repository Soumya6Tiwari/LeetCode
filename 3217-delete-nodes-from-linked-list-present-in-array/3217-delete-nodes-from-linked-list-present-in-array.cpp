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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) 
    {
        vector<int>v,v1;
        int i,j,k;
        map<int,int>m;
        ListNode*temp=head;
        ListNode*head1=NULL;
        ListNode*temp1=NULL;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        
        for(i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for( i = 0; i < v.size(); i++) {
        if(m.find(v[i]) != m.end()) {
            v[i] = -1; // Mark found elements with -1
        }
        }
        for(i=0;i<v.size();i++)
        {
            if(v[i]!=-1)
            {
                v1.push_back(v[i]);
            }
        }
        i=0;
        while(i<v1.size())
        {
            ListNode*newnode=new ListNode(v1[i]);
            if(i==0)
            {
                head1=newnode;
                temp1=newnode;
            }
            else
            {
                temp1->next=newnode;
                temp1=newnode;
            }
            i++;
        }
        return head1;
        
        
        
    }
};