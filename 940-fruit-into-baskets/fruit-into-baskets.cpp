class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int ,int>fq;
        int left =0; 
        int ans =0 ; 
        for(int right=0; right<fruits.size();right++){
            fq[fruits[right]]++;
            while(fq.size() > 2){
                fq[fruits[left]]--;
                if(fq[fruits[left]]==0)
                    fq.erase(fruits[left]);
                left ++; 
            }
            ans = max(ans, right- left +1);
        }
        return ans ;
    }
};