class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int>mp;
        vector<int>v;
        while(n>0){
            int digit = n%10 ;
            n/=10;
            v.push_back(digit);
        }
        for(int i:v) mp[i]++;
        int add =0 ;
        for(auto x : mp){
            add += x.first*x.second;
        }
        return add;
    }
};