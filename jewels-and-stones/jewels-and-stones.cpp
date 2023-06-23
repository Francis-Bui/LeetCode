class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans = 0;
        for (auto letter : jewels) {
            for (auto chars : stones) {
                if (letter == chars) ans++;
            }
        }

        return ans;
        
    }
};