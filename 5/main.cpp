class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();

        vector<vector<bool>> memo(n, vector<bool>(n, false));

        int start = 0;
        int maxLen = 1;

        for (int i = 0; i < n; i++) {
            memo[i][i] = true;
        }

        for (int curLen = 2; curLen <= n; curLen++) {
            for (int i = 0; i <= n - curLen; i++) {
                int j = i + curLen - 1;

                if (s[i] != s[j] || !(curLen == 2 || memo[i+1][j-1])) continue;

                memo[i][j] = true;

                if (curLen > maxLen) {
                    maxLen = curLen;
                    start = i;
                }
            }
        }

        return s.substr(start, maxLen);
    }
};
