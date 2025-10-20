class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {
        vector<int>q;
        int X=0;
        for(int i=0 ; i<op.size();i++){
            if(op[i]=="++X"||op[i]=="X++"){
                X=X+1;
                
            }else {
                X=X-1;
            }
        }
    return X;
    }
};