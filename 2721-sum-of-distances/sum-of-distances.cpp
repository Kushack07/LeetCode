class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        
        int n = nums.size();
        vector<long long> ans(n,0);
        
        unordered_map<int,long long> count;
        unordered_map<int,long long> sum;
        
        // left to right
        for(int i=0;i<n;i++){
            int v = nums[i];
            
            ans[i] += (long long)i * count[v] - sum[v];
            
            count[v]++;
            sum[v] += i;
        }
        
        count.clear();
        sum.clear();
        
        // right to left
        for(int i=n-1;i>=0;i--){
            int v = nums[i];
            
            ans[i] += sum[v] - (long long)i * count[v];
            
            count[v]++;
            sum[v] += i;
        }
        
        return ans;
    }
};