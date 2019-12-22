class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        look_up = {}
        
        for order, elements in enumerate(nums):
            try:
                return look_up[elements], order 
            except KeyError:
                look_up.setdefault(target - elements, order)
        
