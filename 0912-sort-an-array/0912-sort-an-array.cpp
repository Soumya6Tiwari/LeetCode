class Solution {
public:
    vector<int> sortArray(vector<int>& nums) 
    {
//         int i,j,k,temp;
//         for(i=0;i<nums.size()-1;i++)
//         {
//             for(j=i+1;j<nums.size();j++)
//             {
//                 if(nums[i]>nums[j])
//                 {
//                     temp=nums[i];
//                     nums[i]=nums[j];
//                     nums[j]=temp;
//                 }
                
//             }
//         }
        sort(nums.begin(),nums.end());
        return nums;
        
    }
};