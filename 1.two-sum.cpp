/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while (left < right) {
            if (nums[left] + nums[right] == target) {
                return {left, right};
            } else if (nums[left] + nums[right] > target) {
                right--;
            } else {
                left++;
            }
        }
        return {-1};
    }
};
// @lc code=end

int main() {
    std::vector<int> test_vec = {3, 2, 4};
    Solution s;
    auto res = s.twoSum(test_vec, 6);
    
    for (auto elem : res) {
        std::cout << elem << std::endl;
    }

    return 0;
}