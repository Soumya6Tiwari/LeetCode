class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
//         int i,j,k,lsum=0,rsum=0;
//         for(i=0;i<nums.size();i++)
//         {
//                 if(i==0)
//                 {
//                     lsum=0;
//                 }
//                 else
//                 {
//                     lsum=lsum+nums[i-1];
//                 }
//                 if(i==nums.size()-1)
//                 {
//                     rsum=0;
//                 }
//                 else
//                 {
//                     j=i+1;
//                     while(j!=nums.size())
//                     {    
//                     rsum=rsum+nums[j];
//                         j++;
//                     }
                
//                 }
            
            
//             if(lsum==rsum)
//             {
//                 break;
//             }
//             else
//             {
//                 rsum=0;
//             }
//         }
//         if(i==nums.size())
//         {
//             return -1;
//         }
//         return i;
        
        
        int i,j,k,sum=0,lsum=0,rsum=0;
        for(i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
        }
        for(i=0;i<nums.size();i++)
        {
            if(i==0)
            {
                lsum=0;
                rsum=sum-nums[i]-lsum;
            }
            else if(i==nums.size()-1)
            {
                rsum=0;
                lsum=sum-rsum-nums[i];
            }
            else
            {
                lsum=lsum+nums[i-1];
                rsum=sum-lsum-nums[i];
            }
            if(lsum==rsum)
            {
                return i;
            }
        }
        return -1;
    }
};