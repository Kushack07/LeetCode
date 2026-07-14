class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);/*convert the num to string*/

        vector<int> last(100); /*covert the vector in range of 9 */

        for (int i = 0; i < s.size(); i++) {
            last[s[i] - '0'] = i; /*store only the non zero value*/
        }

        for (int i = 0; i < s.size(); i++) {/*run the from 0 to s.size()*/
            for (int d = 9; d > s[i] - '0'; d--) {/*d from 9 to  non negative number in the s[i] string*/
                if (last[d] > i) {
                    swap(s[i], s[last[d]]);
                    return stoi(s);
                }
            }
        }

        return num;
    }
};

/*
class solution{
public:
    int maxistring(int num){
        string s = to_string(num);
        vector<int>ans;

    }
}*/