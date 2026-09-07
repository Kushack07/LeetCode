class Solution {
public:
    int ans = INT_MIN;

    int solve(TreeNode* root) {

        if (root == nullptr)
            return 0;

        int left = max(0, solve(root->left));
        int right = max(0, solve(root->right));

        // Path passing through current node
        ans = max(ans, left + root->val + right);

        // Path that can be continued to parent
        return root->val + max(left, right);
    }

    int maxPathSum(TreeNode* root) {
        solve(root);
        return ans;
    }
};