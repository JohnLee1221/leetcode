/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start

#include <iostream>
#include <vector>

class Solution {
public:
    int climbStairs(int n) {
        // std::cout << __LINE__ <<std::endl;
        std::vector<int> dp(n, 0);
        dp[0] = 1;
        dp[1] = 1;
        // std::cout << __LINE__ <<std::endl;
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
            // std::cout << __LINE__ <<std::endl;
        }
        // std::cout << __LINE__ <<std::endl;
        return dp[n];
    }
};

int main() {
        // std::cout << __LINE__ <<std::endl;
    Solution s;
    std::cout << s.climbStairs(10) << std::endl;
}
// @lc code=end

