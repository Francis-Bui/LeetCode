class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> bits;
        for (int i = 0; i < n + 1; i++) {
            int r, currentSum = 0, num = i;

            while (num != 0) {
                r = num%2;
                currentSum += r;
                num /= 2;
            }

            bits.push_back(currentSum);
        }

        return bits;
    }
};