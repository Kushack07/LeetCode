class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int>mp;
        while(n>0){
            int digit = n%10 ;
            mp[digit]++;
            n/=10;
        }
        int add =0 ;
        for(auto x : mp){
            add += x.first*x.second;
        }
        return add;
    }
};