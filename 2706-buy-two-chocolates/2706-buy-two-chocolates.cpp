class Solution {
public:
    int buyChoco(vector<int>& prices, int money) 
    {
        int i,j,k,sum=0,leftover=0;
    sort(prices.begin(),prices.end());
        sum=prices[0]+prices[1];
        leftover=money-sum;
        if(leftover<0)
        {
            return money;
        }
        return leftover;
        
    }
};