class Solution {
    public int[] twoSum(int[] nums, int target) {
        int i,j,ind1=0,ind2=0;
        int []arr;
        arr=new int[2];
        for(i=0;i<nums.length;i++)
        {
            for(j=i+1;j<nums.length;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    ind1=i;
                    ind2=j;
                    break;  
                }
            }
        }
        arr[0]=ind1;
        arr[1]=ind2;
        return arr;
        
    }
}
