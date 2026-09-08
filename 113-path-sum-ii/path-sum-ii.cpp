class Solution {
public:
    vector<vector<int>> res;

    void funcn(TreeNode* root, int sum, int target, vector<int>& diary) {

        if (root == nullptr)
            return;

        sum += root->val;
        diary.push_back(root->val);

        // Check if leaf node
        if (root->left == nullptr && root->right == nullptr) {

            if (sum == target) {
                res.push_back(diary);
            }

            diary.pop_back();
            return;
        }

        funcn(root->left, sum, target, diary);
        funcn(root->right, sum, target, diary);

        diary.pop_back();
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

        vector<int> diary;

        funcn(root, 0, targetSum, diary);

        return res;
    }
};