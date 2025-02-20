class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        string ans = "";
        int cnt = 0;
        for(string nums: nums){
            if(nums[cnt] == '1'){
                ans += '0';
            }
            else{
                ans += '1';
            }
            cnt++;
        }
        return ans;
    }
};
