class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        n = len(nums1)
        m = len(nums2)
        arr = []
        for i in range(n):
            for j in range(m):
                if nums2[j]==nums1[i]:
                    
                    p = 0
                    for k in range(j+1,m):
                        if nums2[k]>nums1[i]:
                            arr.append(nums2[k])
                            p = 1
                            break
                    if(p==0):
                        arr.append(-1)
                    break        

        return arr                   

