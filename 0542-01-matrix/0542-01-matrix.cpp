class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();

        vector<vector<int>> visited(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>> q;

        vector<vector<int>> ans(n,vector<int>(m));
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    cnt++;
                    visited[i][j]=1;
                }
            }
        }

        if(cnt==0) return mat;

        int r[]={-1,0,1,0};
        int c[]={0,1,0,-1};
        while(q.size()>0){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int distance=q.front().second;
            q.pop();

            ans[row][col]=distance;

            for(int i=0;i<4;i++){
                int nrow=row+r[i];
                int ncol=col+c[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m &&  visited[nrow][ncol]==0){
                    q.push({{nrow,ncol},distance+1});
                    visited[nrow][ncol]=1;
                }
            }
        }
        return ans;
    }
};