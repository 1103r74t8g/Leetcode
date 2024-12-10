class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int, int>mp;
        int sum = 0;
        int n = grid.size();
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                mp[grid[i][j]]++;
                sum += grid[i][j];
            }
        }
        int correct = ((1 + n * n) * n * n) / 2;
        int cnt = correct - sum;
        int repeat;
        for(auto& [key, value] : mp){
            if(int(value) == 2){
                repeat = int(key);
            }
        }
        int missing = repeat + cnt;
        vector<int>ans;
        ans.push_back(repeat);
        ans.push_back(missing);
        return ans;
    }
};
