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
typedef ListNode L;
    ListNode* deleteDuplicates(ListNode* h) {
        L* t=new L(0,h);
        L* cur=h;
        L* prev=t;
        while(cur)
        {
            while(cur->next && cur->next->val==cur->val) cur=cur->next;
            if(prev->next==cur) prev=cur;
            else prev->next=cur->next;
            cur=cur->next;
        }
        return t->next;
    }
};