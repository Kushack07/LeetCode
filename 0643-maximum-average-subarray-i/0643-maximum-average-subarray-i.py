class Solution:
    def findMaxAverage(self, a: List[int], k: int) -> float:
        cs=sum(a[:k])
        maxi=cs
        for i in range(k,len(a)):
            cs+=a[i]-a[i-k]
            maxi=max(maxi,cs)
        return maxi/k