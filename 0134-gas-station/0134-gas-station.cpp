class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int deficit=0;
        int balance=0;
        int start=0;
        for(int i=0;i<gas.size();i++)
        {
            balance=balance+gas[i]-cost[i];
            if(balance<0)
            {
                // no travelling
                deficit=deficit+abs(balance);
                start=i+1;
                balance=0;
            }
           
        }
        if(balance-deficit<0)
        {
            // travelling not possible
            return -1;
        }
        return start;
        
    }
};