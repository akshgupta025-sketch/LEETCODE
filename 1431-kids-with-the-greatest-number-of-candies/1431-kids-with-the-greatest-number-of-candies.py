class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        arr = []
        n = len(candies)
        maxu = max(candies)
        for i in range(n):
            if candies[i]+extraCandies >=maxu :
                arr.append(True)
            else:
                arr.append(False)

        return arr                    