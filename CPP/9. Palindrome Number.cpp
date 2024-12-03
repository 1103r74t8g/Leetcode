class Solution {
public:
    bool isPalindrome(long int x) {
        if(x<0){
            return false;
        }
        else{
            string s1 = to_string(x);
            string s2 = s1;              
            reverse(s2.begin(), s2.end()); 
            return s1 == s2;              
        }
    }
};

