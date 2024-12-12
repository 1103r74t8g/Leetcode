class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        unordered_map<int, int>mp;
        for(auto& pair : nums1){
            int key = pair[0];
            int value = pair[1];
            mp[key] += value;
        }
        vector<vector<int>> ans;
        for(const auto& [key, value]: mp){
            ans.push_back({key, value});
        }
        sort(ans.begin(), ans.end());
        return ans;
    }   
};
