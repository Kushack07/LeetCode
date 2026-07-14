class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n =stones.size();
        priority_queue<int>v;
        for(int c: stones){
            v.push(c);
        }
        while(v.size()>1){
            int x = v.top();
            v.pop();
            int y = v.top();
            v.pop();
            if(x!=y){
                v.push(x-y); 
            }
            if(v.empty()){
                return 0;
            }
        }
        return v.top();
    }
};