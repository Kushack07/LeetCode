class Solution {
public:
    bool canConstruct(string r, string m) {
        int n = r.size();
        int z = m.size();

        unordered_map<char, int> kush;
        unordered_map<char, int> luv;

        for(int i = 0; i < n; i++) {
            kush[r[i]]++;
        }

        for(int j = 0; j < z; j++) {
            luv[m[j]]++;
        }

        for(auto x : kush) {
            if(luv[x.first] < x.second) {
                return false;
            }
        }

        return true;
    }
};