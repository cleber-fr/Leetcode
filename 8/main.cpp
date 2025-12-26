class Solution {
public:
    int myAtoi(string s) {
        long long res = 0;
        bool counting = false;
        int signal = 1;
        for (const char c : s) {
            if (c == ' ' && !counting) continue;

            if ((c == '-' || c == '+') && !counting) {
                signal = c == '-' ? -1 : 1;
                counting = true;
            } else if (c >= '0' && c <= '9') {
                counting = true;
                res = res * 10 + (c - '0');

                if (signal == 1 && res > INT_MAX) {
                    return INT_MAX;
                } else if (signal == -1 && res > (long long)INT_MAX + 1) {
                    return INT_MIN;
                }

            } else {
                return (int)(res * signal);
            }
        }
        return (int)(res * signal);
    }
};
