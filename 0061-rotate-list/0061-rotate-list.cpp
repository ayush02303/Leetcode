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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0)
            return head;
        int l = 1;
        ListNode* temp = head;
        while (temp->next != NULL) {
            l += 1;
            temp = temp->next;
        }
        temp->next = head;

        k = k % l;
        int ans = l - k;
        ListNode* temp2 = head;

        for (int i = 0; i < ans-1; i++) {
            temp2 = temp2->next;
        }
        ListNode* newHead = temp2->next;
        temp2->next = nullptr;

        return newHead;
    }
};