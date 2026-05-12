class Solution {
public:
    int minimumEffort(vector<vector<int>>& a) {
sort(a.begin(),a.end(),[&](vector<int>&a,vector<int>&b){
        return a[1]-a[0]>b[1]-b[0];
    });
    int st=a[0][1];
    int b=a[0][1]-a[0][0];
    int ln=0;
    for(int i=1;i<a.size();i++)
    {
        int cst=a[i][0];
        int th=a[i][1];
        if(b<th)
        {
            ln+=th-b;
            b=th;
        }
        b-=cst;
    }
    return st+ln;
    }
};