class Solution {
public:
    void sortColors(vector<int>&a) {
     int l=0,h=a.size()-1,mid=0;
     while(mid<=h)
     {
        if(a[mid]==0) swap(a[l++],a[mid++]);
        else if(a[mid]==1) mid++;
        else swap(a[mid],a[h--]);
     }
    }
};