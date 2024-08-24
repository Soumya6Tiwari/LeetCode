class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        
        // BRUTE FORCE
        
//        int i,j,k,maxi=INT_MIN,profit;
//         for(i=0;i<prices.size();i++)
//         {
//             for(j=i+1;j<prices.size();j++)
//             {
//                 if(prices[i]<prices[j])
//                 {
//                     profit=abs(prices[i]-prices[j]);
//                     maxi=max(maxi,profit);
//                 }
                
//             }
//         }
//         if(maxi==INT_MIN)
//         {
//             return 0;
//         }
//         return maxi;
        
        // OPTIMIZED SOLUTION
        
        int i,j,k,mini=INT_MAX,max_profit=INT_MIN,profit;
        for(i=1;i<prices.size();i++)
        {
            mini=min(mini,prices[i-1]);
            profit=prices[i]-mini;
            max_profit=max(max_profit,profit);
        }
        if(max_profit<0)
        {
            return 0;
        }
        return max_profit;
    }
};