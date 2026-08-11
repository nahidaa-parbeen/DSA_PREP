class Solution {
public:

    void find_comb(int idx,vector<int>&arr,int target,vector<int>&ds,vector<vector<int>>&ans){
    if(target == 0){
        ans.push_back(ds);
        return;
    }
    if(idx == arr.size()) return;
        for(int i=idx;i<arr.size();i++){
            if(i>idx && arr[i]==arr[i-1]) continue;
            if(arr[i]>target) break;
            ds.push_back(arr[i]);
            find_comb(i+1,arr,target-arr[i],ds,ans);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>ds;
        vector<vector<int>>ans;
        find_comb(0,candidates,target,ds,ans);
        return ans;
    }
};
