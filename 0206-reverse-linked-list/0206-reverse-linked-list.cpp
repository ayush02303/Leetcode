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
    ListNode* reverseList(ListNode* head) {
        // optimized in place solution 
        ListNode* temp = head; 
        ListNode* prev = NULL; 

        while(temp!= NULL){
            ListNode* nxt = temp->next; 
            temp->next = prev; 
            prev= temp; 
            temp = nxt; 
        }
        return prev; 
    }
};