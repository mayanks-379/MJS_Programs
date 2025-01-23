class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        int row = 0, column = 0, direction = 1;
        bool skip = false;

        vector<int> ans;
        while(row < grid.size()) {
            if(!skip) {
                ans.push_back(grid[row][column]);
            }
            skip = skip^true;
            if (direction == 1) {
                if (column == grid[0].size() - 1) {
                    row++;
                    direction = -1;
                } else {
                    column++;
                }
            } else {
                if (column == 0) {
                    row++;
                    direction = 1;
                } else {
                    column--;
                }
            }
        }
        return ans;
    }
};