class Solution {
public:
    bool lemonadeChange(vector<int>& bills) 
    {
        int i,j,k;
        int five=0,ten=0,twenty=0;
        for(i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
            {
                five++;
            }
            else if(bills[i]==10)
            {
                if(five>0)
                {
                    five=five-1;
                    ten=ten+1;
                }
                else
                {
                    return false;
                }
            }
            else if(bills[i]==20)
            {
                twenty++;
                if(five<1)
                {
                    return false;
                }
                else if(ten&&five)
                {
                    ten=ten-1;
                    five=five-1;
                }
                else if(five>=3)
                {
                    five=five-3;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};