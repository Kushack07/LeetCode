class Solution {
public:
    bool isGoodArray(vector<int>& a) {
        auto gcd=a[0];
        for(auto i:a) gcd=__gcd(gcd,i);
        return gcd==1;
    }
};