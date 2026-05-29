class Solution:
    def minElement(self, nums: List[int]) -> int:
        n = len(nums)
        minu = 100
        for i in range(n):
            m = nums[i]
            s = 0
            while(m>0):
                r = m%10
                s+=r
                m=m // 10

            if minu>s:
                minu = s
                    
            
           

        return minu    



     