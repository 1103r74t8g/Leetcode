class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0)count++;
        }
        nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());
        while(count--){
            nums.push_back(0);
        }
    }
};
