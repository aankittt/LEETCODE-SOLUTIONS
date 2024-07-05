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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) 
    {    
        vector<int> v; 
        ListNode*prev = head; ListNode* curr = head->next; ListNode* ahead = head->next->next;
        int i=2;
        
        while(curr->next != NULL)
        {
            if(prev->val < curr->val && curr->val > ahead->val)
                v.push_back(i); 
            if(prev->val > curr->val && curr->val < ahead->val)
                v.push_back(i); 
            prev = prev->next, curr = curr->next, ahead = ahead->next, i++;
        }
        
        if(v.size() < 2) 
            return {-1,-1};
        
        int temp, min_dist = INT_MAX;
        for(int i=1; i<v.size(); i++) 
        {
            temp = v[i] - v[i-1]; 
            min_dist = min(temp, min_dist); 
        }
        
        return {min_dist, v[v.size()-1] - v[0]}; 
    }
};