class Solution(object):
    def threeSumClosest(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        nums.sort()
        closest_sum = nums[0]+nums[1]+nums[2]

        for i in range(0,len(nums)):
            left = i+1
            right = len(nums)-1 
            while left<right:
                current_sum = nums[i]+nums[left]+nums[right]
                if current_sum == target:
                    return current_sum
                if abs(closest_sum-target) > abs(current_sum-target):
                    closest_sum = current_sum
                if current_sum < target:
                    left+=1
                else:
                    right-=1
        
        return closest_sum