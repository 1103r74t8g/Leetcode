class Solution {
public:
    int splitNum(int num) {
        vector<int> nums;
        while(num != 0){
            int cnt = num % 10;
            nums.push_back(cnt);
            num /= 10;
        }
        sort(nums.begin(), nums.end());
        int num1 = 0;
        int num2 = 0;
        for(int i = 0; i < nums.size(); i += 2){
            num1 = num1 * 10 + nums[i]; 
        }
        for(int i = 1; i < nums.size(); i += 2){
            num2 = num2 * 10 + nums[i];
        }
        return num1 + num2;
    }
};
