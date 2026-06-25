class Solution {
public:
    bool completePrime(int n) {
        vector<int>x={2,3,5,7,23,37,53,73,313,317,373,797,3137,3797,739397};
        for(int i:x) if(i==n) return true;
        return false;
    }
};