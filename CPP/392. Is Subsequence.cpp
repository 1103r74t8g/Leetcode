class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        for(j = 0; j < t.size(); j++){
            if(s[i] == t[j]){
                i++;
            }
        }
        if(i == s.size()){
            return true;
        }
        return false;
    }
};
