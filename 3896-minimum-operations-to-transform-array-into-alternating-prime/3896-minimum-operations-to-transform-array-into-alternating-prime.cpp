class Solution {
public:
bool prime(int n)
{
    if(n<2) return false;
    for(int i=2;i*i<=n;i++) if(n%i==0) return false;
    return true;
}
    int minOperations(vector<int>&a) {
        int n=a.size(),cnt=0;
        for(int i=0;i<a.size();i++)
        {
            if(!prime(a[i]) && i%2==0)
            {
                int temp=a[i];
                while(!prime(temp))
                {
                    temp++;
                    cnt++;
                }
            }
            if(prime(a[i]) && i%2!=0)
            {
                if(a[i]==2) cnt+=2;
                else cnt+=1;
            }
        }
        return cnt;
    }
};