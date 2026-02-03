class Solution {
public:
    bool isTrionic(vector<int>& a) {
        int i=1,n=a.size();
        while(i<n&&a[i]>a[i-1]) i++;
        if(i<2|| i==n) return false;
        while(i<n && a[i]<a[i-1]) i++;
        if(i<3 || i==n) return false;
        while(i<n && a[i]>a[i-1]) i++;
        return i==n;
    }
};