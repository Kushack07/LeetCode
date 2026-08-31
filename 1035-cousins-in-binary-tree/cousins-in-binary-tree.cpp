class Solution {
public:
    int xd = 0, yd = 0;
    TreeNode* xp = NULL;
    TreeNode* yp = NULL;

    void dfs(TreeNode* root, int x, int y, int depth, TreeNode* parent) {
        if (root == NULL) return;

        if (root->val == x) {
            xd = depth;
            xp = parent;
        }

        if (root->val == y) {
            yd = depth;
            yp = parent;
        }

        dfs(root->left, x, y, depth + 1, root);
        dfs(root->right, x, y, depth + 1, root);
    }

    bool isCousins(TreeNode* root, int x, int y) {
        dfs(root, x, y, 0, NULL);

        return xd == yd && xp != yp;
    }
};