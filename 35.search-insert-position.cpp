/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start

#include <vector>

using namespace std;

// AC
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = -1;
        int right = nums.size();
        while (left + 1 != right) {
            int mid = (left + right) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid;
            } else {
                right = mid;
            }
        }
        return right;
    }
};
// @lc code=end

