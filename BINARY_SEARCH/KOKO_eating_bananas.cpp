class Solution {
public:
    long long calctotalh(vector<int>& piles, int mid) {
        long long totalh = 0;
        for (int bananas : piles) {
            totalh += ceil((double)bananas / mid);
        }
        return totalh;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxpile = *max_element(piles.begin(), piles.end());
        int l = 1, hi = maxpile;
        int ans = maxpile;
        while (l <= hi) {
            int mid = l + (hi - l) / 2;
            long long totalh = calctotalh(piles, mid);
            if (totalh <= h) {
                ans = mid;
                hi = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
};
