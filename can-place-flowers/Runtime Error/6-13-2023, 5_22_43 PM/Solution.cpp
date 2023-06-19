// https://leetcode.com/problems/can-place-flowers

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n == 0) return true;
        
        if (flowerbed.size() == 0) return false;

        if (flowerbed.size() == 1) {
            return (flowerbed[0] == 0);
        }

        for (int i = 0; i <= flowerbed.size(); i++) {
            if (flowerbed[i] == 1) continue;

            if (i == 0) {
                if (flowerbed[i + 1] == 0) {
                    flowerbed[i] = 1;
                    n--;
                }
            }
            
            else if (i == flowerbed.size()) {
                if (flowerbed[i - 1] == 0) {
                    flowerbed[i] = 1;
                    n--;
                }
            } 
            
            else {
                if (flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0 && flowerbed[i] == 0) {
                    flowerbed[i] = 1;
                    n--;
                }
            }

        }
        return (n==0);
    }
};