class Solution {
    const int T = 10000;
public:
    int largestVariance(const string& s) {
        
        unordered_map<int,list<int>> hash;

        for (int i = 0; i < s.length(); i++) {
            hash[s[i]].push_back(i);
        }

        if (hash.size() == 1) return 0;

        for (auto& pair : hash) {
            pair.second.push_back(T);
        }

        int cur, prev, res = 0, count[2];
        list<int>::iterator it[2];

        for (auto h1 = hash.begin(); h1 != hash.end(); h1++) {
            auto& l1 = h1->second;
            for (auto h2 = next(h1); h2 != hash.end(); h2++) {
                auto& l2 = h2->second;
                if (l1.size() <= res + 1 && l2.size() <= res + 1) continue;
                if (l1.size() > 1 && l2.size() > 1) {
                    it[0] = l1.begin(), it[1] = l2.begin();
                    count[0] = count[1] = 0;
                    prev = 1;
                    while (*it[0] != T || *it[1] != T) {
                        cur = 0;
                        bool x = *it[0] > *it[1];
                        do { ++cur; it[x] = next(it[x]); } 
                        while (*it[x] < *it[!x]);
                        if (count[x] - prev >= 0) {
                            count[x] += cur - prev;
                            res = max(res, count[x]);
                        }
                        else {
                            count[x] = cur;
                            res = max(res, cur - 1);
                        }
                        prev = cur;
                    }
                }
                else {
                    res = max(res, abs((int)(l1.size() - l2.size())));
                }
            }
        }

        return res;
    }
};