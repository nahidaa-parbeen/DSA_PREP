class Solution {
public:
    int maxelement(vector<vector<int>>& arr, int col) {
        int n = arr.size();
        int max_val = INT_MIN;
        int idx = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i][col] > max_val) {
                max_val = arr[i][col];
                idx = i;
            }
        }
        return idx;
    }

    vector<int> findPeakGrid(vector<vector<int>>& arr) {
        int n = arr.size();
        int m = arr[0].size();
        int l = 0;
        int h = m - 1;
        while (l <= h) {
            int mid = (l + h) / 2;
            int row = maxelement(arr, mid);
            int left = mid - 1 >= 0 ? arr[row][mid - 1] : INT_MIN;
            int right = mid + 1 < m ? arr[row][mid + 1] : INT_MIN;
            if (arr[row][mid] > left && arr[row][mid] > right) {
                return {row, mid};
            } else if (left > arr[row][mid]) {
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return {-1, -1};
    }
};
