// https://leetcode.com/problems/unique-paths-ii

class Solution {
public:
    int dfs(vector<vector<int>>& obstacleGrid, vector<vector<int>>& dp, int i, int j) {
        if (i >= size(dp) || j >= size(dp[0]) || obstacleGrid[i][j] == 1) return 0;
        if (i == size(dp) - 1 && j == size(dp[0]) - 1) return 1;
        if (dp[i][j]) return dp[i][j];
        return dp[i][j] = dfs(obstacleGrid, dp, i+1, j) + dfs(obstacleGrid, dp, i, j+1);
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>> dp(size(obstacleGrid), vector<int>(size(obstacleGrid[0])));
        return dfs(obstacleGrid, dp, 0, 0);
    }
};