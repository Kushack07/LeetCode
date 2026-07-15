class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sume =0; 
        int sumo =0;
        if(n%2!=0){
            sumo+=n;
        }else{
            sume+=n; 
        }
        return std::gcd(sume,sumo);
    }
};