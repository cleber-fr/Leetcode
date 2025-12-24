class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            int aux = i;
            int sets = 0;
            while (aux) {
                aux = aux & (aux - 1);
                sets++;
            }
            if (sets == k) {
                count += nums[i];
            }
        }
        return count;
    }
};
