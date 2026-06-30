class Solution {
public:
    int numberOfSubstrings(string s) {
        int a=-1,b=-1,c=-1,cnt=0;
        size_t pos=s.find("abc",0);
        while(pos!=string::npos)
        {
            pos=s.find("abc",pos+1);
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a') a=i;
            if(s[i]=='b') b=i;
            if(s[i]=='c') c=i;
            if(a!=-1 && b!=-1 && c!=-1) cnt+=min({a,b,c})+1;
        }
        return cnt;
    }
};