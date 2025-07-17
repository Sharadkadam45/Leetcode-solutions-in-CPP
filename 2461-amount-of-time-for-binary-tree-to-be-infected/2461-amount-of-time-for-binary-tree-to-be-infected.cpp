class Solution {
public:
    TreeNode* t1;
    void findTreeNode(TreeNode* t,int start){
        if(t==NULL) return;
        if(t->val==start){
            t1=t;
            return;
        }
        findTreeNode(t->left,start);
        findTreeNode(t->right,start);
    }
    void mapparent(TreeNode* root,unordered_map<TreeNode*,TreeNode*>& parent){
        if(root==NULL) return;
        if(root->left){
            parent[root->left]=root;
        }
        if(root->right){
            parent[root->right]=root;
        }
        mapparent(root->left,parent);
        mapparent(root->right,parent);
    }
    int amountOfTime(TreeNode* root, int start) {
        findTreeNode(root,start);

        queue<pair<TreeNode*,int>> q; //for trversing
        unordered_set<TreeNode*> visited; //for visited node
        
        unordered_map<TreeNode*,TreeNode*> parent;
        mapparent(root,parent);
        int level=-1;
        q.push({t1,0});
        while(q.size()>0){
            TreeNode* temp=q.front().first;
            int l=q.front().second;
            q.pop();
            
            visited.insert(temp);
            if(temp->left && visited.find(temp->left)==visited.end()){
               q.push({temp->left,l+1}); 
            }
            if(temp->right && visited.find(temp->right)==visited.end()){
               q.push({temp->right,l+1}); 
            }
            if( parent.find(temp)!=parent.end()){
                TreeNode* p=parent[temp];
                if(visited.find(p)==visited.end()) q.push({p,l+1});
            }
            level=max(level,l);
        }
        return level;
    }
};