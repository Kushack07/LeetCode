class Solution {
public:
    bool checkStrings(string s1, string s2) {   
        array<string,2>a,b;
        for(int i=0;i<s1.size();i++)
        {
            int off=i&1;
            a[off]+=s1[i];
            b[off]+=s2[i];
        }
        for(int i=0;i<2;i++)
        {
            sort(a[i].begin(),a[i].end());
            sort(b[i].begin(),b[i].end());
        }
        return a==b;
    }
};