class Solution {
public:
    string findDifferentBinaryString(vector<string>& a) {
        string t="";for(int i=0;i<a.size();i++)if(a[i][i]=='0')t+='1';else t+='0';
        return t;
    }
};