class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        for(int i=1;i<=n;i++){
            vector<int> v(i,-1);
            v[0]=1;
            v[i-1]=1;
            if(i>=3){
                for(int k=1;k<i-1;k++){
                    v[k]=ans[i-2][k]+ans[i-2][k-1];
                }
            }   
            ans.push_back(v);
        }
        return ans;
    }
};