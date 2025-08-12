class Solution {
public:
    bool helper(TreeNode* root,TreeNode* subRoot){
        if(root==NULL && subRoot==NULL) return true;
        if(root==NULL || subRoot==NULL) return false;
        if(root->val!=subRoot->val) return false;
        return helper(root->left,subRoot->left) && helper(root->right,subRoot->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL) return false;
        if(root->val ==subRoot->val){
            if(helper(root,subRoot)==true) return true;
        }
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};