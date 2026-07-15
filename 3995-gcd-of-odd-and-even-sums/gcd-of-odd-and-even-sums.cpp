class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd =0 ;
        int sumEven = 0 ;
        if(n%2 !=0){
            sumOdd+=n; 
        }else{
            sumEven+=n;
        }
        return std::gcd(sumOdd,sumEven);
    }
};