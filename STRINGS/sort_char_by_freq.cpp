class Solution {
public:
    static bool comparator(pair<int, char> p1, pair<int, char> p2) {
        if (p1.first != p2.first)
            return p1.first > p2.first;
        return p1.second < p2.second;
    }

    string frequencySort(string s) {
        pair<int, char> freq[128];

        for (int i = 0; i < 128; i++) {
            freq[i] = {0, char(i)};
        }

        for (char ch : s) {
            freq[(unsigned char)ch].first++;
        }

        sort(freq, freq + 128, comparator);

        string ans;

        for (int i = 0; i < 128; i++) {
            ans.append(freq[i].first, freq[i].second);
        }

        return ans;
    }
};
