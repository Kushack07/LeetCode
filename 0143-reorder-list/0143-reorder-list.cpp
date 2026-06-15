class Solution {
public:
typedef ListNode l;
    void reorderList(ListNode* head) {
if(!head || !head->next) return ;
l* cur=head;
vector<int>a;
while(cur){
    a.push_back(cur->val);
    cur=cur->next;
}
vector<int>ans;
int left=0,right=a.size()-1;
while(left<=right){
    if(left==right){
        ans.push_back(a[left]);
        break;
    }
    ans.push_back(a[left]);
    ans.push_back(a[right]);
    left++;
    right--;
}
cur=head;
int i=0;
while(cur){
    cur->val=ans[i];
    cur=cur->next;
    i++;
}
    }
};