class Solution {
public:
    bool solve(vector<vector<char>>& board,string word,int i,int j,int k){
        int n=board.size();
        int m=board[0].size();

        int r[]={-1,0,1,0};
        int c[]={0,1,0,-1};

        if(k==word.size()) return true;
        char ch=board[i][j];
        board[i][j]='#';

        for(int x=0;x<4;x++){
            int row=i+r[x];
            int col=j+c[x];
            if(row>=0 && row<n && col>=0 && col<m && board[row][col]==word[k]){
                if(solve(board,word,row,col,k+1)) return true;
            }
        }
        board[i][j]=ch;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();


        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]) {
                    if(solve(board,word,i,j,1)) return true;
                }
            }
        }


        return false;
        
    }
};