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
typedef TreeNode N;
int f(N* rt,int &res)
{
    if(!rt) return 0;
    int l=max(0,f(rt->left,res));
    int r=max(0,f(rt->right,res));
    res=max(res,l+r+rt->val);
    return max(l,r)+rt->val;
}
    int maxPathSum(TreeNode* root) {
        int res=root->val;
        f(root,res);
        return res;
    }
};