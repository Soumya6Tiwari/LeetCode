class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k)
    {
        vector<vector<int>>v,ans;
        vector<int>v1;
        int i,j,diff,diff1,diff2,count=0;
        sort(nums.begin(),nums.end());
        if(nums.size()%3!=0)
        {
            return v;
        }
        else
        {
            for(i=0;i<nums.size();i++)
            {
                count++;
                if(count<=3)
                {
                    v1.push_back(nums[i]);
                }
                if(count==3)
                {
                    v.push_back(v1);
                    v1.clear();
                    count=0;
                }
            }
            for(i=0;i<v.size();i++)
            {
                
                    diff=abs(v[i][0]-v[i][1]);
                    diff1=abs(v[i][1]-v[i][2]);
                    diff2=abs(v[i][0]-v[i][2]);
                    if(diff>k||diff1>k||diff2>k)
                    {
                        return ans;
                    }
            
            }
            
        }
        return v;
        
    }
};