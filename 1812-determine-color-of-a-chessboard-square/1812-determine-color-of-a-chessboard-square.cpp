class Solution {
public:
    bool squareIsWhite(string coordinates) 
    {
        int i,j,k,num1,num2;
        string val2;
        char val1;
        val1=coordinates[0];
        val2=coordinates[1];
        num1=int(val1);
        num2=stoi(val2);
        if((num1%2==0&&num2%2!=0)||(num1%2!=0&&num2%2==0))
        {
            return true;
        }
        return false;
        
    }
};