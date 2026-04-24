class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        string word3 ; 
        int i=0,j=0;
        while(i<n || j<m){
            if(i<n){
                word3.push_back(word1[i]);
                i++;
            }
            if(j<m){
                word3.push_back(word2[j]);
                j++;
            }
        }
        return word3;
    }
};