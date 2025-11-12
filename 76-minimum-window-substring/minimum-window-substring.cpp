class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.length();
        int m=t.length();
        if(n<m) return "";
        map<char,int>wind,need;//count freq of t
        for(char c:t) need[c]++;
        int mini=INT_MAX,have=0;
        int needcnt=need.size();
        int left=0;
        int start=0;
        for(int right=0;right<s.length();right++)
        {
            char c=s[right];
            wind[c]++;
            if(need.count(c) && wind[c]==need[c]){
                have++;
            }
            while(have==needcnt)
            {
                if(right-left+1<mini)
                {
                    mini=right-left+1;
                    start=left;
                }
                //shrink from left
                char d=s[left];
                wind[d]--;
                if(need.count(d) && wind[d]<need[d])
                {
                    have--;
                }
left++;
            }
        }
        return mini==INT_MAX ? "":s.substr(start,mini);
    }
};