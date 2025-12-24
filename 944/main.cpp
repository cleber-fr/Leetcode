class Solution {
    public:
        int minDeletionSize(vector<string>& strs) {
            int count = 0;
            for (int col = 0; col < strs[0].size(); col++) {
                bool ordered = true;
                int row = 0;
                while ((row < strs.size()-1) && ordered) {
                    if (strs[row][col] > strs[row+1][col]) {
                        count++;
                        ordered = false;
                    }
                    row++;
                }
            }

            return count;
        }
};
