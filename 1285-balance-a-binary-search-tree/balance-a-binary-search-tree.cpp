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
void in(TreeNode* r,vector<int>&a)
{
    if(!r) return;
    in(r->left,a);
    a.push_back(r->val);
    in(r->right,a);
}
TreeNode* bs(vector<int>&a,int l,int r)
{
    if(l>r) return nullptr;
    int m=(l+r)/2;
    TreeNode* nn=new TreeNode(a[m]);
    nn->left=bs(a,l,m-1);
    nn->right=bs(a,m+1,r);
    return nn;
}
    TreeNode* balanceBST(TreeNode* r) {
        if(!r) return nullptr;
        vector<int>a;
        in(r,a);
        return bs(a,0,a.size()-1);
    }
};