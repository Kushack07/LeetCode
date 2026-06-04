class Solution {
public:
bool solve(string s)
    {
        unordered_map<int, vector<int>> p;
        int h = 0, v = 0;
        p[0] = {0};
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] == 'N')
                h++;
            else if(s[i] == 'S')
                h--;
            else if(s[i] == 'E')
                v++;
            else
                v--;
            if(p.count(h) && find(p[h].begin(), p[h].end(), v) != p[h].end())
                return true;
            p[h].push_back(v);
        }
        return false;
    }
    bool isPathCrossing(string p) {
        return solve(p);
    }
};