class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        
        for(int i=0;i<row;i++){
            int j=0;
            int k=col-1;
            while(j<=k){
                int mid=(j+k)/2;
                if(matrix[i][mid]==target) return true;
                else if(matrix[i][mid]>target) k=mid-1;
                else j=mid+1;
            }
        }
        return false;
    }
};