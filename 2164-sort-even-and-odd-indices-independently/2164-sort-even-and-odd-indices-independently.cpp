class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) 
    {
        vector<int>odd;
        vector<int>even;
        int i,j,k;
        for(i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        reverse(odd.begin(),odd.end());
        j=0,k=0;
        for(i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                nums[i]=even[j];
                j++;
            }
            if(i%2!=0)
            {
                nums[i]=odd[k];
                k++;
            }
        }
        return nums;
    }
};