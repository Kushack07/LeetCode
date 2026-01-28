/*
class Solution {
public:
    int majorityElement(vector<int>& a) {
        int cnt=1;
        int x=a[0],ans=0;
        int maxi=1;
        int n=a.size();
        sort(a.begin(),a.end());
        for(int i=0;i<a.size()-1;i++)
        
        {
            if(a[i+1]==a[i]) cnt++;
            else{
                if(cnt>maxi)
                {
                    maxi=cnt;
                    x=a[i];
                }
                cnt=1;
            }
        }
        if(cnt>maxi)
            {
                x=a[n-1];
            }
        return x;
    }
};
*/

class Solution {
public : 
    int majorityElement(vector<int>&nums){
        sort(nums.begin(),nums.end());
        int n= nums.size();
        return nums[n/2];
    }
    
};
