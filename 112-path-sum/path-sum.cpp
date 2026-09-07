class Solution {
public:
    bool path(int sum, TreeNode* root, int targetSum) {

        if (root == nullptr) {
            return false;
        }

        sum += root->val;

        // Check only at leaf node
        if (root->left == nullptr && root->right == nullptr) {
            return sum == targetSum;
        }

        if (path(sum, root->left, targetSum)) {
            return true;
        }

        if (path(sum, root->right, targetSum)) {
            return true;
        }

        return false;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        return path(0, root, targetSum);
    }
};