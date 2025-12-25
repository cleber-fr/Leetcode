class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int sum = 0;
        int subsetsAmount = 1 << nums.size();
        for (int i = 0; i < subsetsAmount; i++) {
            int xorTotal = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (i & (1 << j)) {
                    xorTotal = xorTotal ^ nums[j];
                }
            }
            sum += xorTotal;
        }

        return sum;
    }
};
