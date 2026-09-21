class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //SEE CAREFULL AND THINK U WILL GET 
        vector<vector<string>>ans ;
        unordered_map<string , vector<string>>ga ; 
        for(auto x:strs){
            string temp = x; 
            sort(x.begin(),x.end());
            ga[x].push_back(temp);
        }
        for(auto x : ga ){
            ans.push_back(x.second);
        }
        return ans;
    }
};