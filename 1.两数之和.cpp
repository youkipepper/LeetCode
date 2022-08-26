/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start

// Way 1 暴力法

#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = nums.size() - 1; j > i; j--)
            {
                if (nums[i] + nums[j] == target && i != j)
                {
                    return {i, j};
                }
            }
        }
    }
};

// @lc code=end

// test

void print(int val)
{
    cout << val << " ";
}

int main()
{
    int numsArray[] = {6, 2, 7, 11, 15},
        target = 9,
        len = sizeof(numsArray) / sizeof(int);
    vector<int> v;
    for (int i = 0; i < len; i++)
    {
        v.push_back(numsArray[i]);
    }

    // test vector 是否初始化成功

    for_each(v.begin(), v.end(), print);
    cout << endl;

    Solution s;

    vector<int> rest = s.twoSum(v,target);

    for_each(rest.begin(), rest.end(), print);
    cout << endl;

    return 0;
}
