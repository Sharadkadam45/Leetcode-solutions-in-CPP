class BSTIterator {
public:
    vector<int> v;
    int i=0;
    void inorder(TreeNode* root){
        if(root==NULL) return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    BSTIterator(TreeNode* root) {
        inorder(root);
    }
    
    int next() {
        int n=v.size();
        if(i==n) return -1;
        i++;
        return v[i-1];
    }
    
    bool hasNext() {
        int n=v.size();
        if(i==n) return false;
        return true;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */