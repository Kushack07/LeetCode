class Solution {
public:
vector<int>f(int n)
{
vector<int>d;
if(n==0) return {0};
    while(n>0)
    {
        d.push_back(n%10);n/=10;
    }
    return d;
}
int sum(vector<int>d)
{
    int s=0;
    if(d.size()==0) return 0;
    for(int i:d) s+=i;
    return s;
}
int f1(int n)
{
    if(!n) return 0;
    return 1+(n-1)%9;
}
    int addDigits(int n) {
        // vector<int>d=f(n);
        // if(n==0) return 0;
        // while(d.size()!=1)
        // {
        //     int cs=sum(d);
        //     d=f(cs);
        // }
        // return d[0];
        return f1(n);
    }
};