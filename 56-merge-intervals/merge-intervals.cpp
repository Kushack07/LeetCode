class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& is) {
        vector<vector<int>>ans; 
        int n=is.size();
        sort(is.begin(),is.end());
        int start = is[0][0];
        int end = is[0][1];
        for(int i=0;i<n;i++){
            int start1 =is[i][0];
            int end1 =is[i][1];
            if(start1<=end){
                end = max(end,end1);
            }else{
                ans.push_back({start,end});
                start = start1;
                end = end1;
            }
        }
        ans.push_back({start,end});
        return ans;
    }
};