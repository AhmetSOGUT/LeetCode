class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        for i in range(len(nums)-1):
            for k in range(i+1,len(nums)):
                if nums[i] + nums[k] == target:
                    return[k,i]


        return []

