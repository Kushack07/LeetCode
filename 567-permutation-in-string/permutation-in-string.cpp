class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int a[26]={}, b[26]={}, n=s1.size();
        if(n>s2.size()) return false;

        for(int i=0;i<n;i++) a[s1[i]-'a']++,b[s2[i]-'a']++;

        for(int i=n;i<s2.size();i++){
            bool ok=1;
            for(int j=0;j<26;j++) if(a[j]!=b[j]) ok=0;
            if(ok) return true;
            b[s2[i]-'a']++;
            b[s2[i-n]-'a']--;
        }

        for(int j=0;j<26;j++) if(a[j]!=b[j]) return false;
        return true;
    }
};