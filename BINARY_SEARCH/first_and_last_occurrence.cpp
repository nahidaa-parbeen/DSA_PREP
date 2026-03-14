class Solution {
public:
    int findFirst(vector<int>& v, int key) {
        int start = 0, end = v.size() - 1, res = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (v[mid] == key) {
                res = mid;
                end = mid - 1; 
            } else if (key < v[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return res;
    }

    int findLast(vector<int>& v, int key) {
        int start = 0, end = v.size() - 1, res = -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (v[mid] == key) {
                res = mid;
                start = mid + 1; 
            } else if (key < v[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return res;
    }

    vector<int> searchRange(vector<int>& v, int key) {
        int first = findFirst(v, key);
        int last = findLast(v, key);
        return {first, last}; 
    }
};
