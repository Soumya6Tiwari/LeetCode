class Solution {
public:
    int countSeniors(vector<string>& details) 
    {
        int count=0,i,j,val1,val2,number;
        string val;
        string num1,num2;
        for(i=0;i<details.size();i++)
        {
            val=details[i];
            num1=val[11];
            num2=val[12];
            val1=stoi(num1);
            val2=stoi(num2);
            number=val1*10+val2;
             if(number>60)
             {
                 count++;
             }
        }
        return count;
        
    }
};