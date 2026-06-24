class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0;
        int maxLen = 1;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            int left = i;
            int right = i;

            while (left >= 0 && right < n && s[left] == s[right]) {

                int currLen = right - left + 1;

                if (currLen > maxLen) {
                    maxLen = currLen;
                    start = left;
                }

                left--;
                right++;
            }

            left = i;
            right = i + 1;

            while (left >= 0 && right < n && s[left] == s[right]) {

                int currLen = right - left + 1;

                if (currLen > maxLen) {
                    maxLen = currLen;
                    start = left;
                }

                left--;
                right++;
            }
        }

        return s.substr(start, maxLen);
    }
};
