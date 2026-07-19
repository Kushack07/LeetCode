class Solution {
public:

    int height(TreeNode* root, int &res) {

        if (root == NULL)
            return 0;

        int l = height(root->left, res);
        int r = height(root->right, res);

        // Maximum sum if we extend the path to the parent.
        int temp = max(root->val, root->val + max(l, r));

        // Maximum sum if the path passes through this node.
        int ans = max(temp, root->val + l + r);

        // Update the global answer.
        res = max(res, ans);

        return temp;
    }

    int maxPathSum(TreeNode* root) {

        int res = INT_MIN;

        height(root, res);

        return res;
    }
};