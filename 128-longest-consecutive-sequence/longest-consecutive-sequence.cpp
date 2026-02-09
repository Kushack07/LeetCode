class Solution {
public:
int x=1,y=1;
    int longestConsecutive(vector<int>& a) {
        if(a.empty()) return 0;
       // sort(a.begin(),a.end());
       
    //     for(int i=1;i<a.size();i++)
    //     {
    //         if(a[i]==a[i-1]) continue;
    //         if(a[i]==a[i-1]+1)x++;
    //         else{
    //             y=max(y,x);x=1;
    //         }
    //       }
    // return max(x,y);
//--------------------O(N)--------------------------
unordered_set<int>st;
for(int i:a) st.insert(i);
int res=0;
for(int i:a)
{
    if(st.find(i)!=st.end())
    {
        if(st.find(i-1)==st.end())
        {
            int cur=i,cnt=0;
            while(st.find(cur)!=st.end())
            {
                st.erase(cur);
                cur++;
                cnt++;
            }
        
        res=max(res,cnt);
    }
    }
}
return res;



    }
};