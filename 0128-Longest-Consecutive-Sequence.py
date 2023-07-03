#Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
class Solution(object):
    def longestConsecutive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        longest = 0
        set1 = set(nums)
        for num in nums:
            if(num-1) not in set1:
                length = 1
                while((num+length) in set1):
                    length+=1
                longest = max(length, longest)
        return longest

