class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int alt = 0 ;
        int heigh = 0 ;
        for(int x:gain){
            alt+=x;
            heigh = max(heigh,alt);
        }
        return heigh;
    }
};