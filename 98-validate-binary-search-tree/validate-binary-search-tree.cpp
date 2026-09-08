class Solution {
public:
    TreeNode* prev = nullptr;
    bool ans = true;

    bool isValidBST(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }

        isValidBST(root->left);

        if (prev != nullptr && root->val <= prev->val) {
            ans = false;
        }

        prev = root;

        isValidBST(root->right);

        return ans;
    }
};