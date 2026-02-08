class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) {
        vector<int>res=a;
        int pos=0,neg=1;
        for(int i:a)
        {
            if(i>=0){
                res[pos]=i;pos+=2;
            }
            else{
                res[neg]=i;neg+=2;
            }
        }
        a=res;
        return a;
    }
};