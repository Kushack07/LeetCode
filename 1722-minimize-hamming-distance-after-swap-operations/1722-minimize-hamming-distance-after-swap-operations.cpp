class Solution {
public:
// int  find(vector<int>&par,int x)
// {
//     if(x==par[x]) return x;
//     par[x]=find(par[x]);
//     return par[x];
// }
    int minimumHammingDistance(vector<int>& src, vector<int>& t, vector<vector<int>>& as) {
        int n = src.size();
        vector<int> par(n);
        iota(par.begin(), par.end(), 0); 
        function<int(int)> find = [&](int x) {
            if (x == par[x]) {
                return x;
            }
            return par[x] = find(par[x]);
        };
        for (auto& s : as) {
            int r1 = find(s[0]);
            int r2 = find(s[1]);
            par[r1] = r2;
        }
        unordered_map<int, unordered_map<int, int>> cnt;
        for (int i = 0; i < n; ++i) {
            int rt = find(i);
            cnt[rt][src[i]]++;
        }
        int dis = 0;
        for (int i = 0; i < n; ++i) {
            int rt = find(i);
            if (--cnt[rt][t[i]] < 0) {
                dis++;
            }
        }
        return dis;
    }
};
