class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) 
    {
       
       vector<int>result;
        vector<int>values;
        vector<int>ans;
        set<int>s;
      long  i,j,k,num,num1,val,number=0,p=1,sum=0;
        for(i=0;i<nums.size();i++)
        {
            val=nums[i];
            if(val<10)
            {
                result.push_back(val);
            }
            else
            {    
            while(val>0)
            {
                
                num1=val%10;
                values.push_back(num1);
                val=val/10;
                   
            }
            for(j=0;j<values.size();j++)
            {
                number=(number*10)+values[j];
             
            }
            
            result.push_back(number);
            number=0;
                values.clear();
        }
        }
        for(i=0;i<nums.size();i++)
        {
            result.push_back(nums[i]);
        }
        for(i=0;i<result.size();i++)
        {
            s.insert(result[i]);
        }
        // ans.assign(s.begin(),s.end());
        return s.size();
        
    }
};