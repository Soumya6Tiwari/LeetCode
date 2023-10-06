class Solution {
public:
    int divide(int dividend, int divisor) 
    {
         long long result=0;
        long long divi,div;
        divi=(long long) dividend;
        div=(long long) divisor;
        if(dividend == -2147483648 && divisor == -1) 
        {return 2147483647;
        }
        if(divi<0&&div<0)
        {
            divi=0-(divi);
            div=0-(div);
        result=abs(divi/div);
        
        }
        if(divi>0&&div>0)
        {
            
        result=divi/div;
        
        }
        
        
        else if(divi>0&&div<0)
        {
            div=-(div);
            result=divi/div;
            result=0-(result);
        }
        else if(divi<0&&div>0)
        {
            divi=-(divi);
            result=divi/div;
            result=0-(result);
        }
        return (int)result;
        
        
    }
};