class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<string, int> rowMap;

        
        for (int i = 0; i < n; ++i) {
            string rowKey = "";
            for (int j = 0; j < n; ++j) {
                rowKey += to_string(grid[i][j]) + "_";
            }
            rowMap[rowKey]++;
        }

        int count = 0;

        
        for (int j = 0; j < n; ++j) {
            string colKey = "";
            for (int i = 0; i < n; ++i) {
                colKey += to_string(grid[i][j]) + "_";
            }
            
            if (rowMap.count(colKey)) {
                count += rowMap[colKey];
            }
        }

        return count;
    }
};
