class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v(n+1);

        for (int i = 0; i <= n; i++) {
            int aux = i;
            int count = 0;

            while (aux) {
                aux = aux & (aux - 1);
                count++;
            }

            v[i] = count;
        }

        return v;
    }
};
