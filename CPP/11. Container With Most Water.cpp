class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int tall = 0;
        int amount = 0;
        while(right > left){
            if(height[right] < height[left]){
                tall = height[right];
                if(tall * (right - left) > amount){
                    amount = tall * (right - left);
                }
                right--;
            }else{
                tall = height[left];
                if(tall * (right - left) > amount){
                    amount = tall * (right - left);
                }
                left++;
            }
        }
        return amount;
    }
};
