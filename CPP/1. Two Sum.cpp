class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            int secNum = target - nums[i];
            auto sec = find(nums.begin() + i + 1, nums.end(), secNum);
            if (sec != nums.end()) {
                return {i, static_cast<int>(distance(nums.begin(), sec))};
            }
        }
        return {};
    }
};
