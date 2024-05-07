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
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev=NULL;
        ListNode* forward=NULL;
        
        while(head)
        {
            forward=head->next;
            head->next=prev;
            
            prev=head;
            head=forward;
        }
        
        return prev;
    }
public:
    ListNode* doubleIt(ListNode* head) {
        ListNode* temp=reverse(head);
        ListNode* ans=temp;
        int carry=0;
        ListNode* prev=NULL;
        while(temp)
        {
            prev=temp;
            int a=temp->val*2;
            temp->val=a%10+carry;
            
            carry=a/10;
            temp=temp->next;
        }
        if(carry)
        {
            ListNode* extra=new ListNode(1);
             prev->next=extra;
        }
       
        
        
        return reverse(ans);
        
        
    }
};