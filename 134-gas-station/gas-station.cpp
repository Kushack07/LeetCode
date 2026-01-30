class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_gas= 0 , totalcost = 0 ;
        for(int val:gas){
            total_gas += val ;
        }
        for(int val:cost){
            totalcost  += val ; 
        }
        if(total_gas<totalcost){
            return -1;
        }
        int start =0 ,curgas =0 ;
        for(int i =0 ; i< gas.size();i++){
            curgas +=(gas[i]-cost[i]);
            if(curgas<0){
                start = i+1;
                curgas = 0;
            }
        }
        return start;
    }
};