class Solution {
public:
    string reverseVowels(string s) {
        string vowelArray = "";
        unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        for (char c : s) {
            if (vowels.count(c)) {
                vowelArray += c;
            }
        }
        int n = vowelArray.size() - 1; 
        for (int i = 0; i < s.size(); i++) {
            if (vowels.count(s[i])) {
                s[i] = vowelArray[n--]; 
            }
        }
        
        return s; 
    }
};
