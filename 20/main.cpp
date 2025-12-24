class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stk.push(c);
            } else {
                if (!stk.empty() && (char(c-1) == stk.top() || char(c-2) == stk.top())) {
                    stk.pop();
                } else {
                    return false;
                }
            }
        }

        return stk.empty();
    }
};
