class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        int sum =0 ;
        int cnt = 0 ; 
        unordered_map<int,int>mp ; 
        mp[0]=1;
        for(int i =0;i<a.size();i++){
            sum += a[i];
            if(mp.find(sum-k)!=mp.end()){
                cnt+=mp[sum-k];
            }
            mp[sum]++;
        }
        return cnt ; 
    }
};