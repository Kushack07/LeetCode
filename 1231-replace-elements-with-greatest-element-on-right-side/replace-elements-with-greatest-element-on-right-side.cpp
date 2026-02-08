class Solution {
public:
    vector<int> replaceElements(vector<int>& a) {
        vector<int>x;
        int n=a.size();
        int maxi=a[n-1];
        x.push_back(-1);
        for(int i=n-2;i>=0;i--)
        {
            x.push_back(maxi);
            maxi=max(maxi,a[i]);
        }
        reverse(x.begin(),x.end());
        return x;
    }
};