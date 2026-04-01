class Solution(object):
    def survivedRobotsHealths(self, pos, hl, dir):
        """
        :type positions: List[int]
        :type healths: List[int]
        :type directions: str
        :rtype: List[int]
        """
        n=len(pos)
        order=sorted(range(n),key=lambda i:pos[i])
        h=hl[:]
        alive=[True]*n
        stack=[]
        for i in order:
            if dir[i]=='R':
                stack.append(i)
            else:
                while stack:
                    top=stack[-1]
                    if h[top]<h[i]:
                        alive[top]=False
                        stack.pop()
                        h[i]-=1
                    elif h[top]>h[i]:
                        alive[i]=False
                        h[top]-=1
                        break
                    else:
                        alive[top]=False
                        alive[i]=False
                        stack.pop()
                        break
        return [h[i] for i in range(n) if alive[i]]
        