/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode oddEvenList(ListNode head) {
        if( head == null || head.next == null) return head; 
        ListNode slow = head; 
        ListNode fast = head.next; 
        ListNode evenloc = head.next; 

        while( fast!=null && fast.next!= null){
            slow.next = slow.next.next; 
            fast.next = fast.next.next; 

            slow = slow.next; 
            fast = fast.next; 
        }
        slow.next = evenloc; 
        return head; 
        
    }
}