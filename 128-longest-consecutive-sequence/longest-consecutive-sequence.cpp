class Solution {
public:
int x=1,y=1;
    int longestConsecutive(vector<int>& a) {
        if(a.empty()) return 0;
        sort(a.begin(),a.end());
        for(int i=1;i<a.size();i++)
        {
            if(a[i]==a[i-1]) continue;
            if(a[i]==a[i-1]+1)x++;
            else{
                y=max(y,x);x=1;
            }
          }
    return max(x,y);
    }
};