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
typedef ListNode* L;
    L addTwoNumbers(L l1, L l2) {
        L dum=new ListNode(0);
        L cur=dum;
        int car=0;
        while(l1||l2||car)
        {
                int v1=(l1)? l1->val:0;
                int v2=(l2)?l2->val:0;
                int sum=v1+v2+car;
                car=sum/10;
                cur->next=new ListNode(sum%10);
                cur=cur->next;
                if(l1)l1=l1->next;
                if(l2)l2=l2->next;

    }
    return dum->next;
    }
};