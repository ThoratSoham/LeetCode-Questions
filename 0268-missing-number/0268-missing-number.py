class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        expected_s = (n*(n+1))/2
        actual_s = sum(nums)
        return expected_s - actual_s