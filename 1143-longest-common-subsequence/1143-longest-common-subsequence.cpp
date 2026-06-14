class Solution {
public:
int v[1005][1005];
int lcs(int i,int j,string &a,string &b)
{
    if(i<0||j<0) return 0;
    if(v[i][j]!=-1) return v[i][j];
    if(a[i]==b[j]){
        v[i][j]=1+lcs(i-1,j-1,a,b);
    }
    else{
        v[i][j]=max(lcs(i-1,j,a,b),lcs(i,j-1,a,b));
    }
    return v[i][j];
}
    int longestCommonSubsequence(string a, string b) {
        memset(v,-1,sizeof(v));
        int n=a.size(),m=b.size();
        return lcs(n-1,m-1,a,b);
    }
};