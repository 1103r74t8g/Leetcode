class RecentCounter {
private:
    queue<int> q;
public:
    int ping(int t) {
        q.push(t);
        while(!q.empty() && t - q.front() > 3000){
            q.pop();
        }
        return q.size();
    }
};
