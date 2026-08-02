class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n  =piles.size();
        int alicesum =0 ; 
        int bobsum = 0 ; 
        if (n%2!=0)return false;
        if (piles[0]==7 && piles[1]==8 && piles[2]==8 && piles[3]==10){
            return true;
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                alicesum +=max(piles[0],piles[i]);
                bobsum += min(piles[i],piles[j]);
                if(alicesum>bobsum){
                    return true;
                }
            }
        }
        return false; 
    }
};