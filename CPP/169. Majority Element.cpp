class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        int maxN = 0;
        int ans = 0;
        for(auto& x : mp){
            if(x.second > maxN){
                maxN = x.second;
                ans = x.first;
            }
        }
        return ans;
    }
};
