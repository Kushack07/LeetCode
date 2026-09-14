class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int n = order.size();
        int m = friends.size();
        unordered_map<int,int>luv;
        vector<int>ans; 
        for(int i= 0; i < m; i++){
            luv[friends[i]]++;
        }
        for(int i =0; i < n ;i++){
            if(luv[order[i]]){
                ans.push_back(order[i]);
            }
        }
        return ans; 
    }
};