class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size() < 3) return 0;
        vector<int> left(height.size(), 0);
        vector<int> right(height.size(), 0);
        //left to right
        int maxH = height[0];
        for(int i = 0; i < height.size(); i++){
            left[i] = maxH;
            if(height[i] > maxH){
                maxH = height[i];
            }
        }
        //back to left
        maxH = height[height.size() - 1];
        for(int i = height.size() - 1; i >= 0; i--){
            right[i] = maxH;
            if(height[i] > maxH){
                maxH = height[i];
            }
        }
                
        int sum = 0;
        for(int i = 1; i < height.size() - 1; i++){
            sum += max(0, min(left[i], right[i]) - height[i]);
        }
        return sum;
    }
};
