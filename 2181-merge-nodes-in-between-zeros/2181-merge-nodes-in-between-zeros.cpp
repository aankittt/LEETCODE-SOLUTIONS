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
    ListNode* mergeNodes(ListNode* head) {
        int sum=0;
        ListNode* prev=head;
        ListNode* first=head;
        head=head->next;
        while(head)
        {
            sum+=head->val;
             if(head->val==0)
            {
                head->val=sum;
                 prev->next=head;
                 prev=head;
                sum=0;
            }
            head=head->next;
           
        }
        
        return first->next;
    }
};