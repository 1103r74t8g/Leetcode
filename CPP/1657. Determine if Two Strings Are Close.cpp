class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length() != word2.length()){
            return false;
        }
        unordered_map<char, int> letterCount1;
        unordered_map<char, int> letterCount2;
        for(int i = 0; i < word1.length(); i++){
            letterCount1[word1[i]]++;
        }
        for(int i = 0; i < word2.length(); i++){
            letterCount2[word2[i]]++;
        }
        //key part
        for (auto& [key, value] : letterCount1) {
            if (letterCount2.count(key) == 0) {
                return false;
            }
        }

        //value part
        vector<int> count1;
        vector<int> count2;
        for (auto& [key, value] : letterCount1) {
            count1.push_back(value);
        }
        for (auto& [key, value] : letterCount2) {
            count2.push_back(value);
        }
        sort(count1.begin(), count1.end());
        sort(count2.begin(), count2.end());
        for(int i = 0; i < count1.size(); i++){
            if(count1[i] != count2[i]){
                return false;
            }
        }
        return true;
    }
};
