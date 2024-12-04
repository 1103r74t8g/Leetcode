class Solution {
public:
    int compress(vector<char>& chars) {
        string s = "";
        int count = 1; 
        for (int i = 1; i <= chars.size(); i++) {
            if (i < chars.size() && chars[i] == chars[i - 1]) {
                count++;
            } else {
                s += chars[i - 1];
                if (count > 1) { 
                    s += to_string(count);
                }
                count = 1;
            }
        }

        chars = vector<char>();
        for(int i = 0; i < s.length(); i++){
            chars.push_back(s[i]);
        }
    return chars.size();
    }
};
