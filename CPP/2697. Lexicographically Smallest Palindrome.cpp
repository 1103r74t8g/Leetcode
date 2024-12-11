class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        while(right > left){
            if(s[right] > s[left]){
                s[right] = s[left];
            }
            if(s[right] < s[left]){
                s[left] = s[right];
            }
            right--;
            left++;
        }
        return s;
    }
};
