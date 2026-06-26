class Solution {
public:
typedef vector<int> vi;
typedef vector<bool> vb;
    vector<bool> checkArithmeticSubarrays(vector<int>& a, vector<int>& l, vector<int>& r) {
        vb ans;
    for(int i=0;i<l.size();i++){
        vi sub(a.begin()+l[i],a.begin()+r[i]+1);
        sort(sub.begin(),sub.end());
        bool f=true;
        int d=sub[1]-sub[0];
        for(int j=2;j<sub.size();j++)
        {
            if(sub[j]-sub[j-1]!=d)
            {
                f=false;
                break;
            }
        }
        ans.push_back(f);
    }
    return ans;
    }
};