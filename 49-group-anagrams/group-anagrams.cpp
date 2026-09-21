class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //bheja chalo bkl ho jayega sab kuch 
        vector<vector<string>>ans;//ye ans store krne ke liye end mai 
        unordered_map<string,vector<string>>mp;//key aur value store krne ke liye 
        for(auto x:strs){
            string temp = x; //store krle x ko kyuki bat mai sort hone wla hai 
            sort(x.begin(),x.end());
            mp[x].push_back(temp); // so yaha x jo hai wo key hua wo sorted hai aur push_back use hua hai vector<string> use hua hai na mp ke liye temp toh original value w/o sorted as dekho ans mai bhi original hi cahiye   
        }

        for(auto x : mp){
            ans.push_back(x.second);//store the value of mp unordered_map
        }
        return ans;
    }
};