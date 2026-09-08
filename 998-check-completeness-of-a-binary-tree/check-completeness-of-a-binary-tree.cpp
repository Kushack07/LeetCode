class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }

        queue<TreeNode*> q;
        q.push(root);

        bool nullfound = false;

        while (!q.empty()) {
            TreeNode* t = q.front();
            q.pop();

            if (t == nullptr) {
                nullfound = true;
            }
            else {
                if (nullfound) {
                    return false;
                }

                q.push(t->left);
                q.push(t->right);
            }
        }

        return true;
    }
};