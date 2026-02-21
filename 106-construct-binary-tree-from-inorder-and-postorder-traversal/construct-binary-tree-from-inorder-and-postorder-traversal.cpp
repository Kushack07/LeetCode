class Solution {
public:
    TreeNode* func(vector<int>& inorder ,vector<int>& postorder,int &post,int left,int right ){
        if(left>right)return NULL;
        int curr=postorder[post];
        TreeNode* newnode=new TreeNode(curr);
        post--;
        int p=-1;
        for(int i=left;i<=right;i++){
            if(inorder[i]==curr){
                p=i;
                break;
            }
        }
        newnode->right=func(inorder,postorder,post,p+1,right);
        newnode->left=func(inorder,postorder,post,left,p-1);
        return newnode;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int post=postorder.size()-1;
        return func(inorder,postorder,post,0,inorder.size()-1);
    }
};