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
        ListNode before(0),after(0);
        ListNode* bef_cur = &before;
        ListNode* aft_cur = &after;
        while(head){
            if(head->val < x){
                bef_cur->next = head; 
                bef_cur =head;
            }else{
                aft_cur->next =head;
                aft_cur =head;
            }
            head = head->next;
        }
        aft_cur->next =nullptr;
        bef_cur->next =after.next;
        return before.next;
    }
};