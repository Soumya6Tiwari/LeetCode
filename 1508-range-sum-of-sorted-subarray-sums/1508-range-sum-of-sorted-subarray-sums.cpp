class Solution {
public:
//     void calculate(vector<int>&nums,int n,int &sum, int index,vector<int>&v,vector<int>&v1)
//     {
//         if(index==n)
//         {
//             v.push_back(sum);
//             return;
//         }
        
//         // pickup case
//         v1.push_back(nums[index]);
//         sum=sum+nums[index];
//         calculate(nums,n,sum,index+1,v,v1);
        
//         // not pickup case
//         v1.pop_back();
//         sum=sum-nums[index];
//         calculate(nums,n,sum,index+1,v,v1);     
//     }
    int rangeSum(vector<int>& nums, int n, int left, int right)
    {
//         vector<int>v,v1;
//         int i,j,k;
//         int sum=0,index=0,val=0;
//         calculate(nums,n,sum,index,v,v1);
        
//         sort(v.begin(),v.end());
        
//         for(i=left;i<=right;i++)
//         {
//             val=val+v[i];
//         }
//         // return val%1000000007;
//         return v[10];
        vector<int> arr;
        for (int i = 0; i < n; ++i) {
            int prefix = 0;
            for (int j = i; j < n; ++j) {
                prefix += nums[j];
                arr.push_back(prefix);
            }
        }
        sort(arr.begin(), arr.end());
        int result = 0;
        int MOD = 1000000007;
        for (int i = left - 1; i < right; ++i) {
            result = (result + arr[i]) % MOD;
        }
        return result;
        
    }
};