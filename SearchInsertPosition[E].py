class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        index = 0
        for num in nums:
            if num >= target:
                return index
            index= index+1    
        return index