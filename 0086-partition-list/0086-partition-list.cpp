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
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummy=new ListNode(0);
        ListNode* dummyans=dummy;
        ListNode* bigger=new ListNode(0);
        ListNode* biggerans=bigger;
        ListNode* i=head;
        dummy->next=head;

        while(i)
        {   
            if(i->val<x)
            {
                ListNode* dummy2=new ListNode(i->val);
                dummy->next=dummy2;
                dummy=dummy->next;

            }
            else
            {
                ListNode* dummy3=new ListNode(i->val);
                bigger->next=dummy3;
                bigger=bigger->next;

            }
            i=i->next;
        }
        dummy->next=biggerans->next;

        return dummyans->next;
        
    
    }
};