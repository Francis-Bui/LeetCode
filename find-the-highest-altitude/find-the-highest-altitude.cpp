class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int topAlt = 0;
        int currentAlt = 0;

        for (int i = 0; i < gain.size(); i++) {
            currentAlt += gain[i];
            if (currentAlt > topAlt) topAlt = currentAlt;
        }
        
        return topAlt;
    }
};