class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int cnt=n*m;

        int left=0;
        int right=m-1;

        int top=0;
        int bottom=n-1;

        vector<int> ans;
        while(top<=bottom && left<=right){
            // left to right;
            for(int i=left;i<=right;i++){
                if(ans.size()==cnt) break;
                ans.push_back(matrix[top][i]);
            }
            top++;

            // top to bottom
            for(int i=top;i<=bottom;i++){
                if(ans.size()==cnt) break;
                ans.push_back(matrix[i][right]);
            }
            right--;

            // right to left
            for(int i=right;i>=left;i--){
                if(ans.size()==cnt) break;
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;


            for(int i=bottom;i>=top;i--){
                if(ans.size()==cnt) break;
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
        return ans;
    }
};