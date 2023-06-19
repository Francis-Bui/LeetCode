// https://leetcode.com/problems/house-robber

class Solution {
public:
    int max = 0;
    void dfs(vector<int>& nums, int i, int rnsum) {
        if (i >= size(nums)) {
            if (rnsum > max)
                max=rnsum;
            return;
        }
    
        rnsum += nums[i];
        dfs(nums, i+2, rnsum);
        dfs(nums, i+3, rnsum);
    }
    
    int rob(vector<int>& nums) {
        dfs(nums, 0, 0);
        dfs(nums, 1, 0);
        return max;
    }
};