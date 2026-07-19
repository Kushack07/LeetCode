class Solution {
public:

    int height(TreeNode* root, int &res) {

        if (root == NULL)
            return 0;

        int l = height(root->left, res);
        int r = height(root->right, res);

        // Height of the current node
        int temp = 1 + max(l, r);

        // Diameter passing through the current node
        int ans = l + r;

        // Update the overall diameter
        res = max(res, ans);

        return temp;
    }

    int diameterOfBinaryTree(TreeNode* root) {

        int res = 0;

        height(root, res);

        return res;
    }
};