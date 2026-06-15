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
typedef ListNode l;
// l* copy(vector<int>&a)
// {
//     if(a.empty()) return nullptr;
//     l* head=new l(a[0]);
//     l* cur=head;
//     for(int i=1;i<a.size();i++)
//     {
//         cur->next=new l(a[i]);
//         cur=cur->next;
//     }
//     return head;
// }
    void reorderList(ListNode* head) {
//         l* cur=head;vector<int>a;
//         while(cur){
//             a.push_back(cur->val);
//             cur=cur->next;
//         }
//    //     for(int i:a) cout<<i<<" ";
//         int n=a.size();
//         vector<int>ans;
//         int f=a[0],l=a[n-1],x=a[1];
//         ans.push_back(f);
//         ans.push_back(l);
//         ans.push_back(x);
//         for(int i=2;i<n-1;i++)
//         {
//             ans.push_back(a[i]);
//         }
//         for(int i:ans) cout<<i<<" ";
//         head=copy(ans);
//       //  l* res=copy(ans);
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