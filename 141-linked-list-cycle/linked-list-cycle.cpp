/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode*slow=head; 
        ListNode*high=head;
        while(high != nullptr && high->next != nullptr){
            slow = slow->next; 
            high = high->next->next;
            if(slow == high){
                return true; 
            } 
        }
        return false; 
    }
};