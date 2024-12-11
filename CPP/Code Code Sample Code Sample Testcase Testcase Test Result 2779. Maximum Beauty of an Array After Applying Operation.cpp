class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = 0;
        int maxLength = 0;
        while(right < nums.size()){
            if(nums[right] - nums[left] <= k * 2){
                right++;
                maxLength = max(right - left, maxLength);
            }else{
                left++;
            }
        }
        return maxLength;
    }
};
