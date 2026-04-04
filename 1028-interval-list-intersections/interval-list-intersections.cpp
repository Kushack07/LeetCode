class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& fl, vector<vector<int>>& sl) {
        int n =fl.size();
        int m =sl.size();
        vector<vector<int>>res;
        int i=0,j=0;
        while(i<n && j<m){
            int start=max(fl[i][0],sl[j][0]);
            int end =min(fl[i][1],sl[j][1]);
            if(start<=end){
                res.push_back({start,end});
            }
            if(fl[i][1]<sl[j][1])
                i++;
            else
                j++;
        }
        return res;
    }
};