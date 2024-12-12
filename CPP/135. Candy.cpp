class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> v(ratings.size(), 1);
        int sum = 0;
        //left to right
        for(int i = 1; i < ratings.size(); i++){
            if(ratings[i] > ratings[i - 1]){
                v[i] = v[i - 1] + 1;
            }
        }
        //back to left
        for(int i = ratings.size() - 2; i >= 0; i--){
            if(ratings[i] > ratings[i + 1]){
                if(v[i + 1] + 1 > v[i]){
                    v[i] = v[i + 1] + 1;
                }
            }
        }
        for(int x : v){
            sum += x;
        }
        return sum;
    }
};
