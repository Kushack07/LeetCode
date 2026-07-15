class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>last(26);
        for(int i=0;i<s.size();i++){
            last[s[i]-'a']=i;//provide the index to the last 
        }
        vector<int>ans ;
        int start =0; 
        int end = 0;
        for(int i=0;i<s.size();i++){
            end = max(end,last[s[i]-'a']);//maxm index value for the last index

            if(i==end){
                ans.push_back(end-start+1); // length = end-start+1
                start = i+1;  //increase the start length 
            }
        }
        return ans ;
    }
};