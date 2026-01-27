class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n =nums.size();
        if(n<3) return n;
        int b=1;
        while(b<=n){
            b<<=1;
        }            
        return b;
    }
};