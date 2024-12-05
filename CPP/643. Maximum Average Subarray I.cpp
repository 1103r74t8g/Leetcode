class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double currentSum = 0;

        for(int i = 0; i < k; i++){
            currentSum += nums[i];
        }

        double maxSum = currentSum;
        for(int i = k; i < nums.size(); i++){
            currentSum = currentSum + nums[i] - nums[i - k];
            maxSum = max(currentSum, maxSum);
        }
        return maxSum/k;
    }
};
