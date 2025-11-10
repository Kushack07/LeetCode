class Solution {
public:
    int totalFruit(vector<int>& fruits) {
       int last=-1;
       int lastsnd=-1;
       int lastcnt=0,curr=0;
       int ans=0;
       int n=fruits.size();
       for(int i=0;i<n;i++){
          if(fruits[i]==last || fruits[i]==lastsnd){
            curr++;
          }
          else{
            curr=lastcnt+1;

          }
          if(fruits[i]==last){
            lastcnt++;
          }
          else{
            lastcnt=1;
            lastsnd=last;
            last=fruits[i];
          }
          ans=max(ans,curr);
          
       }
      
       return ans;
    }
};