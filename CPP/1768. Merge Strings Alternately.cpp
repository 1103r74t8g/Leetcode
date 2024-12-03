class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str;
        int i = 0;
        while (i < word1.size() && i < word2.size()) {
            str += word1[i]; 
            str += word2[i]; 
            i++;
        }
       
        if (i < word1.size()) {
            str.append(word1.begin() + i, word1.end());
        }
        
        if (i < word2.size()) {
            str.append(word2.begin() + i, word2.end());
        }

        return str;
    }
};
