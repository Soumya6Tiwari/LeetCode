class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k)
    {
        int length=nums.size();
        vector<int>result;
        vector<int>ans;
        int i,j,p,num,count=0,val,sum=0;
        for(i=0;i<length;i++)
        {
            val=i;
            
            
            while(val>0)
            {
                num=val%2;
                if(num==1)
                {
                    count++;
                }
                val=val/2;
                
            }
            if(count==k)
            {
                result.push_back(i);
            }
            count=0;
            
    }
          for(i=0;i<result.size();i++)
          {
              sum=sum+nums[result[i]];
              
          }
            return sum;
        
        
    }
};