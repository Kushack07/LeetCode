class Solution {
public:
    vector<int> searchRange(vector<int>& a, int t) {
        vector<int>x;int idx=0;
        for(int i:a){
            if(i==t) x.push_back(idx);
            idx++;
        }
        if(x.empty()) return {-1,-1};
    return {x[0],x[x.size()-1]};
    }
};