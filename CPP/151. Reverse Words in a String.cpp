class Solution {
public:
    string reverseWords(string s) {
        vector<string> wordsArray;
        int i = 0;
        while (i < s.length()) {  
            if (s[i] == ' ') {
                i++;
                continue;
            }
            string tmp = "";
            while (i < s.length() && s[i] != ' ') {
                tmp += s[i];
                i++;
            }
            wordsArray.push_back(tmp);
        }

        string result = "";
        for (int i = wordsArray.size() - 1; i >= 0; i--) {
            result += wordsArray[i];
            if (i != 0) {
                result += " ";
            }
        }

        return result;
    }
};
