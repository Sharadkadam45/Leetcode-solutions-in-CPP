class Solution {
public:
    int helper(int m,int n,vector<vector<int>>& dp){
        if(m<=1 || n<=1) return 1;
        if(dp[m][n]!=-1) return dp[m][n];
        return dp[m][n]=helper(m,n-1,dp)+helper(m-1,n,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        
        return helper(m,n,dp);
    }
};