/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int t = nums.size() - 1; t > i; t--)
            {
                if (nums[i] + nums[t] == target && i != t)
                {
                    return {i, t};
                }
            }
        }
        return {};
    }
};
// @lc code=end
