// https://leetcode.com/problems/determine-if-two-strings-are-close

const static auto fast = [] {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}(); 


class Solution {
public:
    bool closeStrings(string word1, string word2) {    
        int index;
        int n = word2.size(), m =word1.size();
        if(n!=m) return false;
        int f1[26]{}, f2[26]{};
        for(int i=0; i<n; i++) {
            f1[word1[i]-'a']++;
        }
        for(int i=0; i<n; i++) {
            index = word2[i]-'a';
            f2[index]++;
            if (f1[index]==0) return false;
        }
        sort(f1, f1+26);
        sort(f2, f2+26);
        for(int i = 0; i < 26; ++i){
            if (f1[i] != f2[i]) return false;
        }
        return true;
    }
};