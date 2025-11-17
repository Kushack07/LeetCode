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
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next){
            cout<< "no cycle";
        }
        ListNode*slow =head;
        ListNode*fast= head;
        while(fast && fast->next){
            slow =slow ->next;
            fast =fast->next->next;
            if(slow == fast){
                ListNode*res = head;
                while(res!=slow){
                    res=res->next ;
                    slow=slow->next;
                }
                return res;
            }  
        }
        return NULL;
    }
};