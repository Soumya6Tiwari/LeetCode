class Solution {
public:
    bool isSameAfterReversals(int num) 
    {
        int i,j,k=1,num1,val1=0,val2=0,p=1,num2,val3;
        vector<int>rev1;
        vector<int>rev2;
        vector<int>res;
        val3=num;
        while(num>0)
        {
            num1=num%10;
            rev1.push_back(num1);
            num=num/10;
            
        }
        for(i=rev1.size()-1;i>=0;i--)
        {
            val1=val1+rev1[i]*k;
            k=k*10;
        }
        while(val1>0)
        {
            num2=val1%10;
            rev2.push_back(num2);
            val1=val1/10;
        }
      
         for(j=rev2.size()-1;j>=0;j--)
        {
            val2=val2+rev2[j]*p;
            p=p*10;
        }
        if(val3==val2)
        {
            return true;
        }
        return false;
        
        
    }
};