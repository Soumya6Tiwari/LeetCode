class Solution {
public:
    int mostFrequentEven(vector<int>& nums)
    {
        map<int,int>m;
        vector<int>v;
        int i,j,k,maxi=INT_MIN,ans=-1;
        for(i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        i=0;
        for(auto i:m)
        {
            if(i.first%2==0)
            {
                if(i.second>maxi)
                {
                    maxi=i.second;
                    ans=i.first;
                }
                else if(i.second==maxi)
                {
                    maxi=i.second;
                    if(i.first<ans)
                    {
                        ans=i.first;
                    }
                }
            }
        }
        if(ans==-1)
        {
            return -1;
        }
        return ans;
    }
};