class Solution {
public:
    void find_sum(int idx, int currsum, vector<int>&arr,vector<int>&sums){
      if(idx==arr.size()){
        sums.push_back(currsum);
        return;
      }
      find_sum(idx+1,currsum+arr[idx],arr,sums);
      find_sum(idx+1,currsum,arr,sums);
    }
    vector<int>subsetSums(vector<int>& arr){
        vector<int>sums;
        find_sum(0, 0,arr,sums);
        sort(sums.begin(),sums.end());
        return sums;
    }
};
