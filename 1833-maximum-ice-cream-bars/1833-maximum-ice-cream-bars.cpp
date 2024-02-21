class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins)
    {
        int i,j,k,count=0,sum=0;
        sort(costs.begin(),costs.end());
        if(costs[0]>coins)
        {
            return 0;
        }
        for(i=0;i<costs.size();i++)
        {
            
            sum=sum+costs[i];
            
            if(sum>coins)
            {
                break;
               
            }
            count++;      
        }
        
        return count;
        
    }
};