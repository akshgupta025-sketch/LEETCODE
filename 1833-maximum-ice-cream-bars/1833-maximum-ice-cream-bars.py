class Solution:
    def maxIceCream(self, costs: List[int], coins: int) -> int:
        ans = 0
        max_cost = max(costs)
        freq = [0]*(max_cost+1)
        for cost in costs:
            freq[cost]+=1

        for price in range(1,max_cost+1):
            if freq[price]==0:
                continue
            cnt = min(freq[price],coins//price)  
            ans+=cnt
            coins-=cnt*price
            if coins<price:
                break

        return ans               