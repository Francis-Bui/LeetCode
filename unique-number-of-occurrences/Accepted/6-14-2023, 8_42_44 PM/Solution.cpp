// https://leetcode.com/problems/unique-number-of-occurrences

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> numMap, valMap;
        int k = 0;
        for (int i = 0; i < arr.size(); i++)
            numMap[arr[i]]++;

        for (auto& [key, value]: numMap) {
            if (valMap.count(value))
                return false;
            else
                valMap[value]++;
        }

        return true;
    }
};