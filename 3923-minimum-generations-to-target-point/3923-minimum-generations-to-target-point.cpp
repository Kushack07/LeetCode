class Solution {
public:
  int minGenerations(vector<vector<int>>& pt, vector<int>& tar) {
        vector<int> dist(343, INT_MAX);

        for (auto& i:pt) {
            int d=49*i[2]+7*i[1]+i[0];
            dist[d]= 0;
        }
        int dest=49*tar[2]+7*tar[1]+tar[0];
        if (dist[dest] == 0) return 0;
        int flag = 0;
        while (flag == 0) {
            flag = 1;
            vector<int>jan;
            for (int i = 0; i < 343; i++) {
                if (dist[i] != INT_MAX)
                    jan.push_back(i);
            }
// for(int i=0;i<(int)jan.size();i++) 
// {
//     for(int j=i+1;j<(int) jan.size();j++)
//     {
//         int a=kn[i],b=kn[j];
//         if(a==b) continue;
//         int ax=a/49,ay=(a/7)%7,az=a%7;
//         int by=b/49,by=(b/7)%7,bz=b%7;
//         int cx=(az+bz)/2,cy=(ay+by)/2,cz=(az+bz)/2;
//         int c=cx*49+cy*7+cz;
//         int cd=max(d[a],d[b])+1;
//         if(cd<dist[c])
//         {
//             dist[c]=cd;
//             flag=0;
//         }

//     }
// // }

//         }
//         return (dist[dest]==INT_MAX?-1:dist[dest]);
// }
            for (int i = 0; i < (int)jan.size(); i++) {
                for (int j = i + 1; j < (int)jan.size(); j++) {
                    int a=jan[i],b=jan[j];
                    if (a == b) continue;
                    int ax = a / 49,  ay = (a / 7) % 7,  az = a % 7;
                    int bx = b / 49,  by = (b / 7) % 7,  bz = b % 7;
                    int cx = (ax + bx) / 2;
                    int cy = (ay + by) / 2;
                    int cz = (az + bz) / 2;
                    int c = cx * 49 + cy * 7 + cz;
                    int c_dist = max(dist[a], dist[b]) + 1;
                    if (c_dist < dist[c]) {
                        dist[c] = c_dist;
                        flag = 0;
                    }
                }
            }
        }

        return (dist[dest] == INT_MAX) ? -1 : dist[dest];
    }
};
