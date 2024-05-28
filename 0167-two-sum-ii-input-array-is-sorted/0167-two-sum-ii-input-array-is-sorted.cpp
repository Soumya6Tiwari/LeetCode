class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int i,j,k,sum=0,a,b;
        vector<int>v;
        int n=numbers.size()-1;
        for(i=0;i<numbers.size();)
        {
            if(i<n)
            {
                if(numbers[i]+numbers[n]==target)
                {
                    v.push_back(i+1);
                    v.push_back(n+1);
                    break;
                }
                else if(numbers[i]+numbers[n]<target)
                {
                    i++;
                }
                else
                {
                    n--;
                }
            }
            
        }
        return v;
        
    }
};