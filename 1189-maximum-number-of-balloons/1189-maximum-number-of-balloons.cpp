class Solution {
public:
    int maxNumberOfBalloons(string s) {
    // int b=0,a=0,l=0,n=0,o=0;
    //    for(char c:s)
    //     {
    //         if(c=='b')b++;
    //         if(c=='a')a++;
    //         if(c=='l')l++;
    //         if(c=='n')n++;
    //         if(c=='o')o++;
    //     }
    //     l=l/2,o=o/2;
    // return min({b,a,l,o,n});
map<char,int>f;
    for(char c:s) f[c]++;
    return min({f['b'],f['a'],f['l']/2,f['n'],f['o']/2});
    }
};