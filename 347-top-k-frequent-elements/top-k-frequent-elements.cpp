class Solution {
public:

    struct cmp {
        bool operator()(pair<int,int>& a, pair<int,int>& b) {
            return a.second > b.second;
        }
    };

    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mp;

        for(int x : nums) {
            mp[x]++;
        }

        priority_queue<pair<int,int>,
                       vector<pair<int,int>>,
                       cmp> pq;

        for(auto x : mp) {
            pq.push({x.first, x.second});

            if(pq.size() > k)
                pq.pop();
        }

        vector<int> ans;

        while(!pq.empty()) {
            ans.push_back(pq.top().first);
            pq.pop();
        }

        return ans;
    }
};