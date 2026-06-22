class Solution {
public:
    int maxDepth(string s) {
        int currdepth = 0;
        int maxdepth = 0;
        for (char ch : s) {
            if (ch == '(') {
                currdepth++;
                maxdepth = max(currdepth, maxdepth);
            } else if (ch == ')') {
                currdepth--;
            }
        }
        return maxdepth;
    }
};
