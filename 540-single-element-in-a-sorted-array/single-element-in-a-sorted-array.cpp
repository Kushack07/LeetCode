class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int i = 0;
        int e = A.size();

        while(i<e-1)
        {
            if(A[i] == A[i+1])
            {
                i+=2;
            }
            else
            {
                return A[i];
            }
        }
        return A[e-1];
    }
};
