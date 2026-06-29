class Solution {
public:
int cnt=0;
    int numOfStrings(vector<string>& pat, string w) {
     for(string &i:pat)
     {
        if(w.find(i)!=std::string::npos)cnt++;
     }
return cnt;
    }
};