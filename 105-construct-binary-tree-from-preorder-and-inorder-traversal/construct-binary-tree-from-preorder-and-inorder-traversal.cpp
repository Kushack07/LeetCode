class Solution {
public:
    int preorderIndex = 0;
    unordered_map<int, int> inorderMap;

    TreeNode* build(int left, int right, vector<int>& preorder) {

        if (left > right)
            return nullptr;

        int rootValue = preorder[preorderIndex++];
        TreeNode* root = new TreeNode(rootValue);

        int inorderIndex = inorderMap[rootValue];

        root->left = build(left, inorderIndex - 1, preorder);
        root->right = build(inorderIndex + 1, right, preorder);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        for (int i = 0; i < inorder.size(); i++) {
            inorderMap[inorder[i]] = i;
        }

        return build(0, inorder.size() - 1, preorder);
    }
};