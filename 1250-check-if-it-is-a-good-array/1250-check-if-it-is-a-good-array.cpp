class Solution {
public:
    bool isGoodArray(vector<int>&a) {
        int g=0;
        for(int i=0;i<a.size();i++){
            g=gcd(g,a[i]);
            if(g==1){
                return true;
            }
        }
        return false;
    }
};