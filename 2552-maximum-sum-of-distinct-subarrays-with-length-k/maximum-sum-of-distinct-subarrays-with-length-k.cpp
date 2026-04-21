class Solution {
public:
    long long maximumSubarraySum(vector<int>& a, int k) {
        unordered_map<int,int> m;
        long long s=0, ans=0;

        for(int i=0;i<a.size();i++){
            s+=a[i], m[a[i]]++;
            if(i>=k) s-=a[i-k], --m[a[i-k]]==0?m.erase(a[i-k]):0;
            if(i>=k-1 && m.size()==k) ans=max(ans,s);
        }
        return ans;
    }
};