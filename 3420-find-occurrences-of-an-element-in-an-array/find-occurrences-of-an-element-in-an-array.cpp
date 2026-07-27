class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& q, int x) {
        vector<int>pos ; 
        int n = nums.size();
        for(int i=0;i< n;i++){
            if(nums[i]==x){
                pos.push_back(i);
            }
        }
        vector<int>ans ; 
        for(int x:q){
            if(x<=pos.size()){
                ans.push_back(pos[x-1]);
            }else{
                ans.push_back(-1);
            }
        }
        return ans ;
    }
};