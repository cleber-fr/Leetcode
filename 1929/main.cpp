class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n * 2);

        while (n--) {
            ans[n] = nums[n];
            ans[n + nums.size()] = nums[n];
        }

        return ans;
    }
};
