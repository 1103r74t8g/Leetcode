class Solution {
public:
    int maxVowels(string s, int k) {
        int currentNum = 0;
        int maxNum = 0;
        std::unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u'};

        for(int i = 0; i < k; i++){
            if(vowels.count(s[i])){
                currentNum++;
            }
        }

        maxNum = currentNum;

        for(int i = k; i < s.length(); i++){
            if (vowels.count(s[i])) {
                currentNum++;
            }
            if (vowels.count(s[i - k])) {
                currentNum--;
            }
            maxNum = max(currentNum, maxNum);
        }
        return maxNum;
    }
};
