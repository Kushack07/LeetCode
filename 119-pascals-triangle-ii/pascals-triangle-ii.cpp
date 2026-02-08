class Solution {
public:
typedef long long ll;
    vector<int> getRow(int a) {
    vector<int>res;
    res.push_back(1);
    ll pi=1;
    for(int i=1;i<=a;i++)
    {
        ll age=pi*(a-i+1)/i;
        res.push_back((int)age);
        pi=age;
    }
    return res;
    }
};