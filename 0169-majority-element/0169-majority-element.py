from collections import Counter
class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        return max(Counter(nums).keys(), key=Counter(nums).get)