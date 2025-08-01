class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> q;
        for (int i = 1; i <= n; i++) {
            q.push_back(i);
        }

        int i = 0;
        while (q.size() > 1) {
            for (int count = 1; count < k; count++) {
                i++;
                if (i == q.size()) {
                    i = 0;
                }
            }
            q.erase(q.begin() + i);
            if (i == q.size()) {
                i = 0;
            }
        }

        return q[0];
    }
};
