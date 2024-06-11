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
    ListNode* reverseKGroup(ListNode* head, int k) {
    if(!head || k<=1)
        return head;
        
        
        int count=0;
        ListNode* target=head;
        while(target && count<k)
        {
            target=target->next;
            count++;
        }
        
        if(count==k)
        {
            ListNode* prev=nullptr;
            ListNode* curr=head;
            ListNode* forward=nullptr;
            
            while(curr!=target)
            {
                forward=curr->next;
                curr->next=prev;
                prev=curr;
                curr=forward;
            }
            
            head->next=reverseKGroup(target,k);
            return prev;
        }
        else
        {
            return head;
        }
        
        
        
    }
};