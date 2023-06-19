// https://leetcode.com/problems/unique-number-of-occurrences

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> numMap, valMap;

        for (int i = 0; i < arr.size(); i++)
            numMap[arr[i]]++;

        for (int i = 0; i < arr.size(); i++) {
            if (valMap.count(numMap[i]))
                return true;
            else
                valMap[numMap[i]]++;
        }

        return false;
    }
};