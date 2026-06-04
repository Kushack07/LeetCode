class Solution {
public:
    int totalWaviness(int x, int y) {
        int z=0;
        for(int i=x;i<=y;i++)
        {
            string p=to_string(i);
            for(int j=1;j+1<p.size();j++)
            {
                if((p[j]<p[j-1]&&p[j]<p[j+1])||(p[j]>p[j-1]&&p[j]>p[j+1])) z++;
            }
        }
        return z;
    }
};