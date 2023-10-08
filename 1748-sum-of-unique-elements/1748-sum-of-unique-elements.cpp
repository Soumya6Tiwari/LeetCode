class Solution {
public:
    int sumOfUnique(vector<int>& nums) 
    {
      int i,j,sum=0,count=0;
      vector<int>result;
       set<int>s;
        vector<int>ans;
       
        if(nums.size()==1)
        {
            sum=nums[0];
        }
        else
        {
        for(i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        }
        
        
        if(s.size()==1)
        {
            sum=0;
        }
        else
        {
              result.assign(s.begin(),s.end());
            for(i=0;i<result.size();i++)
            {
                for(j=0;j<nums.size();j++)
                {
                    if(result[i]==nums[j])
                    {
                        count++;
                    }
                }
                
                if(count==1)
                {
                    ans.push_back(result[i]);
                }
                count=0;
            }
            for(i=0;i<ans.size();i++)
            {
                sum=sum+ans[i];
            }
              
        }
           
            
        
        return sum;
        
    }
};