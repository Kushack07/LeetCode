class Solution {
public:
 int stoneGameV(vector<int>&a){
  int n=a.size(); vector<int>p(n+1);
  for(int i=0;i<n;i++)p[i+1]=p[i]+a[i];
  vector<vector<int>>d(n,vector<int>(n));
  for(int z=2;z<=n;z++)
   for(int l=0;l+z<=n;l++){
    int r=l+z-1;
    for(int k=l;k<r;k++){
     int x=p[k+1]-p[l],y=p[r+1]-p[k+1];
     if(x<=y)d[l][r]=max(d[l][r],x+d[l][k]);
     if(y<=x)d[l][r]=max(d[l][r],y+d[k+1][r]);
    }
   }
  return d[0][n-1];
 }
};