class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxVal = candies[0];
        for (int i = 1; i < candies.size(); i++) {
            if (candies[i] > maxVal) {
                maxVal = candies[i];
            }
        }
        vector<bool> result;
        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= maxVal) {
                result.push_back(true);
            } else {
                result.push_back(false);
            }
        }
        return result;
    }
};

