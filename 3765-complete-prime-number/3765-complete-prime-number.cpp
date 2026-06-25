class Solution {
public:
bool f(int n)
{
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
    bool completePrime(int n) {
        // vector<int>x={2,3,5,7,23,37,53,73,313,317,373,797,3137,3797,739397};
        // for(int i:x) if(i==n) return true;
        // return false;
        string x=to_string(n);
        for(int i=x.size();i>=1;i--)
        {
            int temp=stoi(x.substr(0,i));
            if(!f(temp)) return false;
        }
        for(int i=0;i<x.size();i++)
        {
            int temp=stoi(x.substr(i));
            if(!f(temp)) return false;
        }
        return true;
    }
};