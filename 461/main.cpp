class Solution {
public:
    int hammingDistance(int x, int y) {
        int distance = x ^ y;
        int count = 0;
        while (distance) {
            distance &= distance - 1;
            count++;
        }
        return count;
    }
};
