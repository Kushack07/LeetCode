class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>visit;
        while(visit.find(n)==visit.end()){
            visit.insert(n);
            n = nextn(n);
            if(n==1){
                return true;
            }
        }
        return false;
    }
private:
    int nextn(int n){
        int output = 0 ;
        while(n>0){
            int digit = n%10;
            output += digit*digit;
            n =n/10;
        }
        return output;
    }

};