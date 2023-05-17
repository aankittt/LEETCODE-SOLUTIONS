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
    int pairSum(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        int maxi=INT_MIN;

        while(slow && fast)
        {
            slow=slow->next;
            fast=fast->next->next;

        }
        
        ListNode* prev=nullptr;
        ListNode* curr=slow;
        ListNode* nxt=nullptr;

        while(curr)
        {
            nxt=curr->next;
            curr->next=prev;

                prev=curr;
                curr=nxt;
        }
        while(prev && head)
        {
            int a=prev->val+head->val;
            prev=prev->next;
            head=head->next;

            maxi=max(maxi,a);
        }

        return maxi;

         

        

    }
};