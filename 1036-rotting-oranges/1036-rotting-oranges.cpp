class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>> visited(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>> q;
        int freshcnt=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    visited[i][j]=1;
                }
                else if(grid[i][j]==1){
                    freshcnt++;
                }
            }
        }

        int ans=0;
        int cnt=0;
        int r[]={-1,0,1,0};
        int c[]={0,1,0,-1};

        while(q.size()>0){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int level=q.front().second;
            q.pop();

            ans=max(ans,level);
            for(int i=0;i<4;i++){
                int nrow=row+r[i];
                int ncol=col+c[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m &&  grid[nrow][ncol]==1 && visited[nrow][ncol]==0){
                    q.push({{nrow,ncol},level+1});
                    cnt++;
                    visited[nrow][ncol]=1;
                }
            }
        }
        if(freshcnt!=cnt) return -1;
        return ans;
    }
};