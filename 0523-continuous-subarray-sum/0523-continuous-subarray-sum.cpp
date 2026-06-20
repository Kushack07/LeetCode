class Solution {
public:
typedef vector<int> vi;
    bool checkSubarraySum(vi&a, int k) {
        map<int,int>reminder;
        int n=a.size();
        /*
        rem(0)->-1 start 
        sum=0,idx=0 
        i:a -> 
        sum+=i
        rem=sum%k;
        if(rem<0) rem+=k;
        if(reminder.count(rem))
        {
        if(idx-reminder[rem]>=2)
        {
        return true;
        }
        }
        else  reminder[rem]=idx;
        idx++;
        return false;
        */
        if(n<2) return false;
        map<int,int>remind;
        remind[0]=-1;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            int rem=sum%k;
            if(rem<0) rem+=k;
            if(remind.count(rem))
            {
                if(i-remind[rem]>=2){
                return true;
            }
            }
            else{
                remind[rem]=i;
            }
        }
        return false;
    }
};