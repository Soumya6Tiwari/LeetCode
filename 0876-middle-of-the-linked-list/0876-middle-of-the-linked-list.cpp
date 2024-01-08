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
        int length=0,mid,flag=0;
        ListNode*temp=new ListNode();
        ListNode*result=new ListNode();
        ListNode*head1=new ListNode();
        ListNode*temp1=new ListNode();
        
        
        temp=head;
        while(temp!=NULL)
        {
            length++;
            temp=temp->next;
        }
    
        
          mid=(length/2)+1;
        temp=head;
        length=0;
        while(temp!=NULL)
        {
            length++;
            if(length==mid)
            {
                head=temp;
                break;
                             
            }
            temp=temp->next;
        }
        temp1=head;
//         while(temp1!=NULL)
//         {
//             ListNode*result=new ListNode();
//             if(flag==0)
//             {
                
//                 result->val=temp->val;
//                 head=result;
//                 temp1=head;
//                 flag=1;      
//             }
//             else
//             {
                
//                 result->val=temp->val;
//                 temp1->next=result;
//                 temp1=result;
//             }
//             temp=temp->next;
//         }
//         return result;
        return temp1;
        
    }
};