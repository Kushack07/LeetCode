/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        map<int, TreeNode*> m;
        map<int, int> child;
        for(auto i : descriptions){
            int p = i[0], c = i[1], l = i[2];
            if(m[p] == NULL){
                m[p] = new TreeNode(p);
            }
            if(m[c] == NULL){
                m[c] = new TreeNode(c);
            }
            child[c]++;
            if(l == 1){
                m[p]->left = m[c];
            }else{
                m[p]->right = m[c];
            }
        }
        for(auto i : m){
            if(child[i.first] == 0){
                return i.second;
            }
        }
        return NULL;
    }
};