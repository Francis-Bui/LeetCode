// https://leetcode.com/problems/merge-strings-alternately

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string mergedString;

        for (int i = 0; i < min(word1.length(), word2.length()); i++) {
            mergedString.push_back(word1[i]);
            mergedString.push_back(word2[i]);
        }

        if (mergedString.length() == word1.length() * 2) {
            for (int i = word1.length(); i < word2.length(); i++) {
                mergedString.push_back(word2[i]);
            }
        } else {
            for (int i = word2.length(); i < word1.length(); i++) {
                mergedString.push_back(word1[i]);
            }
        }
        return mergedString;
    }
    
};