class Solution {
public:
vector<int>f(vector<string>&a)
{
    int sc=0,cnt=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=="0" || a[i]=="1"|| a[i]=="2"|| a[i]=="3"|| a[i]=="4"||a[i]=="5"||a[i]=="6")
        {
            string x=a[i];
            sc=sc+stoi(x);
        }
        else if(a[i]=="WD"||a[i]=="NB")sc++;
        else if(a[i]=="W") cnt++;
        if(cnt==10) break;
    }
    return {sc,cnt};
}
    vector<int> scoreValidator(vector<string>&e) {
        return f(e);
    }
};