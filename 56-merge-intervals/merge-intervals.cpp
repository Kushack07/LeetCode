class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& ik) {
        sort(ik.begin(),ik.end());
        vector<vector<int>>res;
        int start=ik[0][0];
        int end = ik[0][1];
        for(int i =0 ;i<ik.size();i++){
            int start1=ik[i][0];
            int end1 =ik[i][1];
            if(start1<=end){
                end = max(end,end1);
            }else{
                res.push_back({start,end});
                start =start1;
                end = end1;
            }
        }
        res.push_back({start,end});
        return res;
    }
};