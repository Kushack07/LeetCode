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
    deque <ListNode*> q;

    ListNode* rotateRight(ListNode* head, int k) {
        if (!head) return head;

        while (head) {
            q.push_back(head);

            head = head->next;
        }

        k = k % q.size();

        while (k--) {
            q.back()->next = q.front();
            q.push_front(q.back());
            q.pop_back();

            q.back()->next = nullptr;
        }
        return q.front();
    }
};