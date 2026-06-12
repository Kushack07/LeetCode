class Solution {
public:
    bool canJump(vector<int>&a) {
    //     int n=a.size();
    //     if(a[0]!=0 && n<=2) return true;
    //     if(n<=1) return true;
    //    for(int i:a) if(i==0) return false;
    //     return true;
    int x=0;
    for(int i=0;i<a.size();i++)
    {
        if(i>x)
        {
            return false;
        }
        else x=max(x,i+a[i]);
    }
        return true;
    
    }
};