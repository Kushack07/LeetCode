class Solution {
public:
vector<int>d;
int cnt=0;
    int countDigits(int n) {
        int num=n;
       while(n>0){
        d.push_back(n%10);n=n/10;
       }
       for(int i:d) cout<<i<<" ";
        for(int i:d)
        {
            if(!(num%i)) cnt++;
        }
        return cnt;
    }
};