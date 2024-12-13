class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> R;
        queue<int> D;
        int n = senate.size();
        for(int i = 0; i < n; i++){
            if(senate[i] == 'R'){
                R.push(i);
            }
            else{
                D.push(i);
            }
        }
        
        while(!R.empty() && !D.empty()){
            if(R.front() < D.front()){
                D.pop();
                R.pop();
                R.push(n);
            }
            else{
                R.pop();
                D.pop();
                D.push(n);
            }
            n++;
        }
        if(R.empty())return "Dire";
        return "Radiant";
    }
};
