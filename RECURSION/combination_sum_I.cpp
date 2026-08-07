class Solution {
public:
    void find_comb(int idx, int target, vector<int>& cand,
                   vector<vector<int>>& ans, vector<int> ds) {
        if (target == 0) {
            ans.push_back(ds);
            return;
        }
        if (target < 0 || idx == cand.size()) {
            return;
        }
        if (cand[idx] <= target) {
            ds.push_back(cand[idx]);
            find_comb(idx, target - cand[idx], cand, ans, ds);
            ds.pop_back();
        }
        find_comb(idx + 1, target, cand, ans, ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        find_comb(0, target, candidates, ans, ds);
        return ans;
    }
};
