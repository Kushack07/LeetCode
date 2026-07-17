class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        if (preorder.empty())
            return nullptr;

        // Root is always first element of preorder
        TreeNode* root = new TreeNode(preorder[0]);

        // Find root in inorder
        int idx = 0;
        while (inorder[idx] != preorder[0])
            idx++;

        // Left subtree
        vector<int> leftInorder(inorder.begin(), inorder.begin() + idx);
        vector<int> leftPreorder(preorder.begin() + 1,
                                 preorder.begin() + 1 + idx);

        // Right subtree
        vector<int> rightInorder(inorder.begin() + idx + 1, inorder.end());
        vector<int> rightPreorder(preorder.begin() + 1 + idx,
                                  preorder.end());

        root->left = buildTree(leftPreorder, leftInorder);
        root->right = buildTree(rightPreorder, rightInorder);

        return root;
    }
};