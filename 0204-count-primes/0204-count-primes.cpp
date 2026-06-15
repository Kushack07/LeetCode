class Solution {
public:
    int countPrimes(int n) {
        vector<bool>res(n,true);
        if(n<=2) return 0;
        res[0]=res[1]=false;
        for(int i=2;i*i<n;i++)
        {
            for(int j=i*i;j<n;j+=i)
            {
                res[j]=false;
            }
        }
        return accumulate(res.begin(),res.end(),0);
    }
};