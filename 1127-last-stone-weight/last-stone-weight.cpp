class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>ans;
        for(int s:stones){
            ans.push(s);
        }

        while(ans.size()>1){
            int x = ans.top();
            ans.pop();
            int y = ans.top();
            ans.pop();
            if(x!=y){
                ans.push(x-y);
            }
            if(ans.empty()){
                return 0;
            }
        }
        return ans.top();
    }
};