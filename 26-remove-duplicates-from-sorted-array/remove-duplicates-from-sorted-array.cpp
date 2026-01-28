class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n= nums.size();
        int k=0 ;
        set<int>st;
        for(int i =0;i<n;i++){
            st.insert(nums[i]);
        }
        for(int i:st){
            //i->a[i]
            nums[k]=i;
            k++;
        }
        return k;
    }
};