class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        n = len(nums)
        sum = 0
        for i in range(n):
            sum+=nums[i]

        rem = sum%k
        return rem    