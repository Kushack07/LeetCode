class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int se =0 ;
        int so =0; 
        if(n%2!=0){
            so+=n;
        }else{
            se+=n;
        }
        return std::gcd(se,so);
    }
};