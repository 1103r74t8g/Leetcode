class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int right = 0;
        int left = 0;
        int canFlip = 1;
        while(right < nums.size()){
            if(nums[right] == 0){
                canFlip--;
            }
            if(canFlip < 0){
                if(nums[left] == 0){
                    canFlip++;
                }
                left++;
            }
            right++;
        }
        return right - left - 1;
    }
};
