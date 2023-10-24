class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) 
    {
        int i,j,p,val,num,max,sum=0;
        i=1;
        sort(nums.begin(),nums.end());
        while(i<=k)
        {
            max=nums[nums.size()-1];
            sum=sum+max;
            nums.pop_back();
            nums.push_back(max+1);
            i++;
        }
        return sum;
        
    }
};