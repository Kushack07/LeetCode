class Solution {
public:
string f(string a,string b)
{
    string res="";
    int x=0;
    int i=a.size()-1,j=b.size()-1;
    while(i>=0 || j>=0 || x)
    {
        if(i>=0) x+=a[i--]-'0';
        if(j>=0)x+=b[j--]-'0';
        res+=(x%2)+'0';x/=2;
    }
    reverse(res.begin(),res.end());
    return res;
}
    string addBinary(string a, string b) {
        return f(a,b);
    }
};