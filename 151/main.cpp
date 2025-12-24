class Solution {
public:
    string reverseWords(string s) {
        stringstream wordStream(s);
        string out;
        stack<string> stk;

        while (getline(wordStream, out, ' ')) {
            if (out.empty()) continue;
            stk.push(out);
        }

        out = "";
        while(!stk.empty()) {
            out += stk.top();
            if (stk.size() > 1) {
                out += " ";
            }
            stk.pop();
        }

        return out;
    }
};
