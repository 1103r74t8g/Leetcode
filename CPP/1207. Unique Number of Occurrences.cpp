class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> numberCount;
        for(int i = 0; i < arr.size(); i++){
            numberCount[arr[i]]++;
        }
        unordered_set<int> numberTime;
        for(auto& pair : numberCount){
            int cnt = pair.second;
            if(numberTime.count(cnt)){
                return false;
            }else{
                numberTime.insert(cnt);
            }
        }
        return true;
    }
};
