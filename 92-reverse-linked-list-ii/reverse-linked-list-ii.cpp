class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(!head || left==right) return head;

        ListNode *t=head,*before=NULL;
        int pos=1;

        while(pos<left){
            before=t;
            t=t->next;
            pos++;
        }

        ListNode *curr=t,*prev=NULL,*next;

        while(pos<=right){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            pos++;
        }

        if(before) before->next=prev;
        else head=prev;

        t->next=curr;

        return head;
    }
};