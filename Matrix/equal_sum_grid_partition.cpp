// Problem: Equal Sum Grid Partition I
// Language: C++

class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        long long total = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                total += grid[i][j];
            }
        }
        if(total % 2 != 0) return false;
        long long target = total / 2;
        long long rows = 0;
        for(int i = 0; i < n - 1; i++){
            for(int j = 0; j < m; j++){
                rows += grid[i][j];
            }
            if(rows == target) return true;
        }
        long long cols = 0;
        for(int i = 0; i < m - 1; i++){
            for(int j = 0; j < n; j++){
                cols += grid[j][i];
            }
            if(cols == target) return true;
        }
        return false;
    }
};
