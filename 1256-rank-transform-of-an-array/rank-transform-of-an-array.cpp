class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();

        if (n == 0)
            return {};

        set<int> uniqueElements(arr.begin(), arr.end()); //store only the unique element

        unordered_map<int, int> ranks; //dublicate are removed automatically 

        int rank = 1;//smallest number assign and get the rank as 1 

        for (int ele : uniqueElements)
            ranks[ele] = rank++;   //assign the rank one by one 

        vector<int> ans; // create a vector ans in that store the values 

        for (int ele : arr)
            ans.push_back(ranks[ele]); // push the ans rank element so their position didn;t differ from the orignal placed 

        return ans;
    }
};