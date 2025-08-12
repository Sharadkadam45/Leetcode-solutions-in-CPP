class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        int f=1;
        int c=0;
        vector<vector<int>> ans;
        vector<int> v;
        vector<int> a;
        if(root) q.push(root);

        while(q.size()>0){
            TreeNode* temp=q.front();
            q.pop();
            if(temp->left!=NULL){
                q.push(temp->left);
                c++;
            }
            if(temp->right!=NULL){
                q.push(temp->right);
                c++;
            }
            a.push_back(temp->val);
            f--;
            if(f==0){
                ans.push_back(a);
                a=v;
                f=c;
                c=0;
            }
        }
        return ans;
    }

};