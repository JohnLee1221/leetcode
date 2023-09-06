/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start

#include <iostream>

// AC
class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) {
            return 0;
        }
        int arr[x];
        for (int i = 0; i < x; ++i) {
            arr[i] = i + 1;
        }
        int left = -1;
        int right = x;
        while (left + 1 != right) {
            int mid = (left + right) / 2;
            if (arr[mid] * arr[mid] == x) {
                return arr[mid];
            } else if (arr[mid] * arr[mid] < x) {
                left = mid;
            } else {
                right = mid;
            }
        }
        return arr[left];
    }
};

int main() {
    Solution s;
    std::cout << s.mySqrt(82) << std::endl;

    return 0;
}
// @lc code=end

