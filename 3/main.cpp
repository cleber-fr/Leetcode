class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> hash;
        int longest = 0;
        int left = 0;

        for (int right = 0; right < s.size(); right++) {
            char c = s[right];
            while (hash.count(c)) {
                hash.erase(s[left]);
                left++;
            }

            hash.insert(c);

            if (hash.size() > longest) {
                longest = hash.size();
            }
        }

        return longest;
    }
};
