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
        
          // NORMAL METHOD
        
//         int length=0,mid,flag=0;
//         ListNode*temp=new ListNode();
//         ListNode*temp1=new ListNode();
//         temp=head;
//         while(temp!=NULL)
//         {
//             length++;
//             temp=temp->next;
//         }
//         mid=(length/2)+1;
//         temp=head;
//         length=0;
//         while(temp!=NULL)
//         {
//             length++;
//             if(length==mid)
//             {
//                 head=temp;
//                 break;
                             
//             }
//             temp=temp->next;
//         }
//         temp1=head;

//         return temp1;
        
        
        
        // USING TORTOISE ALGORITHM ie TWO POINTERS GAME 
        ListNode*fast=new ListNode();
        ListNode*slow=new ListNode();
        fast=head;
        slow=head;
        while(fast!=NULL)
        {
            fast=fast->next;
            if(fast!=NULL)
            {
                fast=fast->next;
                slow=slow->next;
            }
        }
        return slow;
        
    }
};