int searchInsert(vector<int>& arr, int x) {
        int n = arr.size();
        int l = 0, h = n - 1;
        int ans = n;
        while (l <= h) {
            int mid = (l + h) / 2;
            if (arr[mid] >= x) {
                ans =arr[mid];
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
