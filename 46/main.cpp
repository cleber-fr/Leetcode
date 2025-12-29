class Solution {
private:
    void findPermutations(vector<vector<int>>& res, vector<int>& nums, int start) {
        if (start == nums.size()) {
            res.push_back(nums);
            return;
        }

        for (int i = start; i < nums.size(); i++) {
            swap(nums[i], nums[start]);
            findPermutations(res, nums, start + 1);
            swap(nums[i], nums[start]);
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        findPermutations(res, nums, 0);
        return res;
    }
};
