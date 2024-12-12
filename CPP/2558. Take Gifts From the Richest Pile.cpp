class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long sum = 0; 
        make_heap(gifts.begin(), gifts.end());
        for(int i = 0; i < k; i++){
            int max = gifts.front();
            pop_heap(gifts.begin(),gifts.end());
            gifts.pop_back();
            gifts.push_back(sqrt(max));
        }
        for(int i = 0; i < gifts.size(); i++){
            sum += gifts[i];
        }
        return sum;
    }
};
