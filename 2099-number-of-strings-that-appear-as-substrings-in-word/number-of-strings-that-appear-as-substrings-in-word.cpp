class Solution {
public:
    int numOfStrings(vector<string>& pat, string word) {
        int cnt = 0; 
        for(string c : pat){
            if(word.find(c) !=string::npos)
                cnt++;
        }
        return cnt;
    }
};