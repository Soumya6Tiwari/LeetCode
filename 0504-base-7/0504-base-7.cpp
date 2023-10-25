class Solution {
public:
    string convertToBase7(int num)
    {
        int i,j,k;
        int num2=0,val,num1,number,length;
        vector<int>result;
        string ans;
        number=abs(num);
        while(number>0)
        {
            num1=number%7;
            result.push_back(num1);
            number=number/7;
        }
        reverse(result.begin(),result.end());
        length=result.size()-1;
        for(i=0;i<result.size();i++)
        {
            num2=num2+result[i]*pow(10,length);
            length--;
        }
     if(num<0)
     {
         num2=num2*(-1);
         ans=to_string(num2);
     }
        else
        {
            ans=to_string(num2);
        }
        
        return ans;
        
        
    }
};