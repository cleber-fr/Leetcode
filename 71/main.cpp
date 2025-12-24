class Solution {
public:
    string simplifyPath(string path) {
        stringstream pathStream(path);
        string dir;
        deque<string> deq;

        while (getline(pathStream, dir, '/')) {
            if (dir.empty() || dir == ".") continue;
            if (dir == "..") {
                if (!deq.empty()) {
                    deq.pop_back();
                }
            } else {
                deq.push_back(dir);
            }
        }

        if (deq.empty()) {
            return "/";
        } else {
            dir = "";
            while (!deq.empty()) {
                dir += "/" + deq.front();
                deq.pop_front();
            }
        }

        return dir;
    }
};
