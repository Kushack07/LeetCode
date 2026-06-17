class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>fre;
        for(int num:nums){
            fre[num]++;
        }
        sort(nums.begin(),nums.end(),[&](int n1,int n2){
            if(fre[n1]!=fre[n2]){
                return fre[n1]<fre[n2];
            }else{
                return n2<n1;
            }
        });
        return nums;
    }
};