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
    bool isPalindrome(ListNode* head) {
        if(head==nullptr || head->next == nullptr){
            return head; 
        }
        vector<int>ans; 
        while(head !=nullptr){
            ans.push_back(head->val);
            head = head->next;
        }
        int low = 0; 
        int high =ans.size()-1; 
        while(low<high){
            if(ans[low]!=ans[high]){
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
};