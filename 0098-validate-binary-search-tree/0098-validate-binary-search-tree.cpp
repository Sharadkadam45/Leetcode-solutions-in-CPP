class Solution {
public:
    bool helper(TreeNode* root,long long minn, long long maxx){
        if(root==NULL) return true;
        if(root->val <= minn || root->val >= maxx ) return false;
        return helper(root->left, minn, root->val) && helper(root->right, root->val, maxx);
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return NULL;
        return helper(root,LLONG_MIN, LLONG_MAX);
    }
};