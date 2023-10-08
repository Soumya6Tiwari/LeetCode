class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) 
    {
        vector<int>result;
        vector<int>temp;
        int i,j,k,num,num1;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]<=9)
            {
                result.push_back(nums[i]);
            }
            else
            {
                while(nums[i]>0)
                {
                    num=nums[i]%10;
                    temp.push_back(num);
                    nums[i]=nums[i]/10;
                }
                reverse(temp.begin(),temp.end());
                for(j=0;j<temp.size();j++)
                {
                    result.push_back(temp[j]);
                }
                temp.clear();
            }
        }
        return result;
        
    }
};