from collections import defaultdict
from typing import List
import heapq as hq

class Solution:
    def minJumps(self, nums: List[int]) -> int:
        siz = len(nums)

        prime_to_i = defaultdict(list)
        for i, num in enumerate(nums):
            d = 2
            tmp = num
            while d * d <= tmp:
                if tmp % d == 0:
                    prime_to_i[d].append(i)
                    while tmp % d == 0:
                        tmp //= d
                d += 1

            if tmp > 1:
                prime_to_i[tmp].append(i)

        # Simple Dijkstra
        distances = [float('inf')] * siz
        distances[0] = 0
        
        heap = [(0, 0)]
        while heap:
            dist, u = hq.heappop(heap)
            if dist > distances[u]:
                continue

            if u - 1 >= 0 and distances[u - 1] > dist + 1:
                distances[u - 1] = dist + 1
                hq.heappush(heap, (dist + 1, u - 1))

            if u + 1 < siz and distances[u + 1] > dist + 1:
                distances[u + 1] = dist + 1
                hq.heappush(heap, (dist + 1, u + 1))

            if nums[u] in prime_to_i:
                for v in prime_to_i[nums[u]]:
                    if v != u:
                        if distances[v] > dist + 1:
                            distances[v] = dist + 1
                            hq.heappush(heap, (dist + 1, v))
                del prime_to_i[nums[u]]

        return int(distances[-1])
        