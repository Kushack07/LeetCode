class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        if (!root) return result;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            // process one level
            for (int i = 0; i < size; ++i) {
                TreeNode* node = q.front();
                q.pop();
                // if its the last node at this level
                // record it
                if (i == size - 1) result.push_back(node->val);
                // now add children to queue
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
        }
        return result;
    }
};