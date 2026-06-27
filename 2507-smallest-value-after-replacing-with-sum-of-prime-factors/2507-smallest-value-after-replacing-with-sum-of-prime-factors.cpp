class Solution {
public:
int fs(int n)
{
    int div=2,res=0;
    while(n>=2)
    {
        if(!(n%div))
        {
            res+=div;
            n/=div;
        }else div++;
    }
    return res;
}
    int smallestValue(int n) {
        while(1)
        {
            int s=fs(n);
            if(n==s) break;
            n=s;
        }
        return n;
    }
};