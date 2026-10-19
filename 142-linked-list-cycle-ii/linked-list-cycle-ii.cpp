class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode*slow = head; 
        ListNode*fast = head;
        while(fast!=nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next; 
            if(slow == fast){
                ListNode*temp = head ; 
                while(temp != slow){
                    temp =temp->next; 
                    slow =slow->next; 
                }
                return temp;
            }
        }
        return nullptr; 
    }
};