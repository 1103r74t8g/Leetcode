class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(char x : s){
            if(x != '*'){
                st.push(x);
            }else{
                st.pop();
            }
        }
        string ans;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
