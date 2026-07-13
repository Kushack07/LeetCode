class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string digit  ="123456789";
        vector<int>ans ; 
        int lowlen = to_string(low).length();
        int highlen = to_string(high).length();
        for(int len = lowlen; len<=highlen ;++len){
            for(int i =0 ; i <=9-len;i++){
                string sub = digit.substr(i,len);
                int num  = stoi(sub);
                if(num >= low && num<=high){
                    ans.push_back(num);
                }
            }
        }
        return ans ;
    }
};