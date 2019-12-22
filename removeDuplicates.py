class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        for i in range(len(nums)-1,0,-1):
            # moving backwards we remove the last elements and move along
            # moving forwards make the lists smaller so it over runs the pointers
            # giving rise to outofbounds error
            if nums[i-1] == nums[i]:
                del nums[i]
