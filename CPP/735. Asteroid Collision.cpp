class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int x : asteroids) {
            bool exploded = false;

            while(!st.empty() && st.top() > 0 && x < 0) {
                if (st.top() < -x) {
                    st.pop();
                }else if(st.top() == -x) {
                    st.pop();
                    exploded = true;
                    break;
                }else{
                    exploded = true;
                    break;
                }
            }
            if (!exploded) {
                st.push(x);
            }
        }

        
        vector<int> result(st.size());
        for (int i = st.size() - 1; i >= 0; i--) {
            result[i] = st.top();
            st.pop();
        }

        return result;
    }
};
