class Solution {
public:
    int pivotInteger(int n) 
    {
        int i,j,k;
        int suml=0,sumr=0,total=0;
        for(i=1;i<=n;i++)
        {
            total=total+i;
        }
        
        for(i=1;i<=n;i++)
        {
            suml=suml+i;
            sumr=total-suml+i;
            if(suml==sumr)
            {
                return i;
            }
        }
        return -1;
    }
};