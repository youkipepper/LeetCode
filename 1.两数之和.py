#
# @lc app=leetcode.cn id=1 lang=python3
#
# [1] 两数之和
#

from typing import List

# @lc code=start


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        result = []
        mapping = {}
        for i in range(0, len(nums)):
            mapping[nums[i]] = i
        for j in range(0, len(nums)):
            diff = target-nums[j]
            if(diff in mapping and mapping[diff] != j):
                result.append(j)
                result.append(mapping[diff])
                return result
# @lc code=end
