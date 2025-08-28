class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        
        for (int k = 1; k < n; k++) {
            int row = 0;
            int col = k;
            vector<int> v;
            for (row, col; row < n && col < n; row++, col++) {
                v.push_back(grid[row][col]);
            }
            row = 0;
            col = k;
            sort(v.begin(), v.end());
            for (int i = 0; i < v.size(); i++) {
                grid[row][col] = v[i];
                row++;
                col++;
            }
        }
        for (int k = 0; k < n; k++) {
            int row = k;
            int col = 0;
            vector<int> v;
            for (row, col; row < n && col < n; row++, col++) {
                v.push_back(grid[row][col]);
            }
            row = k;
            col = 0;
            sort(v.begin(), v.end());
            for (int i = v.size() - 1; i >= 0; i--) {
                grid[row][col] = v[i];
                row++;
                col++;
            }
        }

        return grid;
    }
};