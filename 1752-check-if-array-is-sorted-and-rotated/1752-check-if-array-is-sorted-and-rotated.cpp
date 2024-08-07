class Solution {
public:
    bool check(vector<int>& nums) 
    {
        vector<int>temp,temp1;
        temp=nums;
        sort(temp.begin(),temp.end());
        temp1=temp;
        int k=nums.size()-1;
        int i=0;   
        while(i<=k)
        {     
            reverse(temp.begin(),temp.begin()+i);
            reverse(temp.begin()+i,temp.end());
            reverse(temp.begin(),temp.end());
            if(temp==nums)
            {
                return true;
            }
            else
            {
            i++;
            temp=temp1;
                
            }
        }
        return false;
    }
};