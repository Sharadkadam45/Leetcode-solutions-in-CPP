class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();

        int left=0;
        int right=m-1;

        int top=0;
        int bottom=n-1;

        int cnt=n*m;

        vector<int> ans;
        while(left<=right && top<=bottom){
            // left to right;
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
                cnt--;
                if(cnt==0) break;
            }

            if(cnt==0) break;

            // top to bottom

            top++;
            for(int i=top;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
                cnt--;
                if(cnt==0) break;
            }

            if(cnt==0) break;
            right--;

            // right to left
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[bottom][i]);
                cnt--;
            }
            if(cnt==0) break;
            bottom--;

            // bottom to up

            for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
                cnt--;
            }

            left++;
            if(cnt==0) break;
        }

        return ans;
    }
    
};