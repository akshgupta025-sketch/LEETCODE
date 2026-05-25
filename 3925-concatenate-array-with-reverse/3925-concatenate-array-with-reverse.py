class Solution:
    def concatWithReverse(self, nums: list[int]) -> list[int]:
        ans = []
        n = len(nums)
        for i in range(n):
            ans.append(nums[i])
        
        for i in range(n-1,-1,-1):
            ans.append(nums[i])

        return ans    